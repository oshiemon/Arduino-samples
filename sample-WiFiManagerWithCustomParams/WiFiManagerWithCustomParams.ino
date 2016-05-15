#define WIFI_TIMEOUT     180  // タイムアウト
#define WIFI_MIN_SIGNAL  30   // 信号強度
#define DEEPSLEEP_MODE   WAKE_RF_DEFAULT
#define WAKEUP_TIME      -1 // will not wake up by timer

const char wifiApName[] = "OnDemandAP";


bool wifi_shouldSaveConfig = false;
WiFiManager wifiManager;

void configModeCallback(WiFiManager *myWiFiManager) {
  Serial.println("\n[WiFiManager] Device is now on Config Mode");
  // LEDの色を変えるなどConfig Modeであることを知らせる処理を書く
  // ...
  
}

void saveConfigCallback() {
  wifi_shouldSaveConfig = true;
}

void loadConfigFile() {
  Serial.println(F("\n[WiFiManager] Mounting FS..."));
  
  if (!SPIFFS.begin()) {
    Serial.println(F("[WiFiManager] Failed to mount FS"));
    
  } else {
    Serial.println(F("[WiFiManager] FS mounted successfully"));
    
    if (SPIFFS.exists("/config.json")) {
      Serial.println(F("[WiFiManager] Reading config file"));
      File configFile = SPIFFS.open("/config.json", "r");
      
      if (configFile) {
        Serial.println(F("[WiFiManager] Opened config file"));
        
        size_t size = configFile.size();
        // Allocate a buffer to store contents of the file.
        std::unique_ptr<char[]> buf(new char[size]);
        
        configFile.readBytes(buf.get(), size);
        DynamicJsonBuffer jsonBuffer;
        JsonObject& json = jsonBuffer.parseObject(buf.get());
        json.printTo(Serial);
        if (json.success()) {
          Serial.println(F("[WiFiManager] JSON parsed"));

          strcpy(param1, json["param1"]);
          strcpy(param2, json["param2"]);
          strcpy(param3, json["param3"]);

        } else {
          Serial.println(F("[WiFiManager] Failed to load json config"));
        }
      }
    }
  }
}

void connectWiFi() {
  
  // load config from FS
  loadConfigFile();
  
  WiFiManagerParameter custom_p1("Param1", "Custom param 1", param1, sizeof(param1));
  WiFiManagerParameter custom_p2("Param2", "Custom param 2", param2, sizeof(param2));
  WiFiManagerParameter custom_p3("Param3", "Custom param 3", param3, sizeof(param3));
  wifiManager.addParameter(&custom_p1);
  wifiManager.addParameter(&custom_p2);
  wifiManager.addParameter(&custom_p3);
  
  
  // callbacks
  wifiManager.setAPCallback(configModeCallback);
  wifiManager.setSaveConfigCallback(saveConfigCallback);
  
  
  // settings
  wifiManager.setConfigPortalTimeout(WIFI_TIMEOUT);     // タイムアウト
  wifiManager.setMinimumSignalQuality(WIFI_MIN_SIGNAL); // 信号強度
  
  
  // config mode switch
  pinMode(PIN_CONF_MODE, INPUT_PULLUP);
  if ( digitalRead(PIN_CONF_MODE) == HIGH ) {
    wifiManager.autoConnect();
  } else {
    
    // 強制的にConfiguration Portalに移行する
    Serial.println(F("\n[WiFiManager] Config mode requested"));
    
    if (!wifiManager.startConfigPortal(wifiApName)) {
      // タイムアウトしたらdeep sleepさせる
      Serial.println(F("[WiFiManager] Failed to connect"));
      ESP.deepSleep(WAKEUP_TIME, DEEPSLEEP_MODE);
      delay(1000);
    }
  }
  
  
  // save params
  strcpy(param1, custom_p1.getValue());
  strcpy(param2, custom_p2.getValue());
  strcpy(param3, custom_p3.getValue());
  if (wifi_shouldSaveConfig) {
    Serial.println(F("\n[WiFiManager] Saving config"));
    DynamicJsonBuffer jsonBuffer;
    JsonObject& json = jsonBuffer.createObject();
    
    json["param1"] = param1;
    json["param2"] = param2;
    json["param3"] = param3;
    
    File configFile = SPIFFS.open("/config.json", "w");
    if (!configFile) {
      Serial.println(F("[WiFiManager] Failed to open config file for writing"));
    }
    
    json.printTo(Serial);
    json.printTo(configFile);
    configFile.close();
  }
  
  
  // Connected
  Serial.println(F("\n[WiFiManager] Connection establised"));
}

