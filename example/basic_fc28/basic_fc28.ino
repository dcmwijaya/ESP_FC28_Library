// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#include <ESP32_FC28.h>
#define SOIL_MOISTURE_PIN 34
float kelembapan_tanah;

FC28Sensor mySensor; 

void setup() {
  mySensor.initFC28Sensor(115200, SOIL_MOISTURE_PIN);
}

void loop() {
  kelembapan_tanah = mySensor.getSoilMoisture();
  Serial.println(kelembapan_tanah);
}
