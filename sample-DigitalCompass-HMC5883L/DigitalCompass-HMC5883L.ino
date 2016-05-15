float getMagneticX() {
  sensors_event_t event;
  mag.getEvent(&event);
  return event.magnetic.x;
}

float getMagneticY() {
  sensors_event_t event;
  mag.getEvent(&event);
  return event.magnetic.y;
}

float getMagneticZ() {
  sensors_event_t event;
  mag.getEvent(&event);
  return event.magnetic.z;
}

float getHeadingDegrees() {
  sensors_event_t event;
  mag.getEvent(&event);
  
  float heading = atan2(event.magnetic.y, event.magnetic.x) + magneticDeclination;
  
  if(heading < 0) {
    heading += 2*PI;
  }
  if(heading > 2*PI) {
    heading -= 2*PI;
  }
  
  float headingDegrees = heading * 180/M_PI;
  return headingDegrees;
}

void magShowSensorDetails()
{
  sensor_t sensor;
  mag.getSensor(&sensor);
  Serial.println("------------------------------------");
  Serial.print  ("Sensor:       "); Serial.println(sensor.name);
  Serial.print  ("Driver Ver:   "); Serial.println(sensor.version);
  Serial.print  ("Unique ID:    "); Serial.println(sensor.sensor_id);
  Serial.print  ("Max Value:    "); Serial.print(sensor.max_value); Serial.println(" uT");
  Serial.print  ("Min Value:    "); Serial.print(sensor.min_value); Serial.println(" uT");
  Serial.print  ("Resolution:   "); Serial.print(sensor.resolution); Serial.println(" uT");  
  Serial.println("------------------------------------");
  Serial.println("");
}

