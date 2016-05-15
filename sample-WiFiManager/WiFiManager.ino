#define WIFI_TIMEOUT     180  // タイムアウト
#define WIFI_MIN_SIGNAL  30   // 信号強度
#define DEEPSLEEP_MODE   WAKE_RF_DEFAULT
#define WAKEUP_TIME      -1 // will not wake up by timer

const char wifiApName[] = "OnDemandAP";
WiFiManager wifiManager;


void configModeCallback(WiFiManager *myWiFiManager) {
  Serial.println("\n[WiFiManager] Device is now on Config Mode");
  // LEDの色を変えるなどConfig Modeであることを知らせる処理を書く
  // ...
  
}

void connectWiFi() {
  
  // callbacks
  wifiManager.setAPCallback(configModeCallback);
  
  // settings
  wifiManager.setConfigPortalTimeout(WIFI_TIMEOUT);     // タイムアウト
  wifiManager.setMinimumSignalQuality(WIFI_MIN_SIGNAL); // 信号強度
  
  pinMode(PIN_CONF_MODE, INPUT_PULLUP);
  
  if ( digitalRead(PIN_CONF_MODE) == HIGH ) {
    wifiManager.autoConnect();
  } else {
    
    // 強制的にConfiguration Portalに移行する
    Serial.println(F("\n[WiFiManager] Config mode requested"));
    if (!wifiManager.startConfigPortal(wifiApName)) {
      
      // タイムアウトしたらdeep sleepさせる
      Serial.println(F("\n[WiFiManager] Failed to connect"));
      ESP.deepSleep(WAKEUP_TIME, DEEPSLEEP_MODE);
      delay(1000);
    }
  }
  
  Serial.println(F("\n[WiFiManager] Connection establised"));
}

