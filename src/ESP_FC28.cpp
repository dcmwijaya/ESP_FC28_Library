// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#include "ESP_FC28.h"

FC28Sensor::FC28Sensor(uint8_t pin) {
  _pin = pin;
}


void FC28Sensor::begin() {
  pinMode(_pin, INPUT_PULLUP);
}


float FC28Sensor::calibration(float cbr){
  adjust = cbr;
  return adjust;
}


void FC28Sensor::getSoilMoisture() {
  nilaiADC = analogRead(_pin);
  Serial.println(nilaiADC);

  if(nilaiADC == NULL){
    Serial.println("Failed to read the value from the FC-28 sensor !!"); 
    return;
  }
  else{
    #if defined(ESP8266)
      percentage = ((100 - ((nilaiADC/1023) * 100))-adjust); // 10 bit => ADC resolution: 1023
      threshold();
    #elif defined(ESP32)
      percentage = ((100 - ((nilaiADC/4095) * 100))-adjust); // 12 bit => ADC resolution: 4095
      threshold();
    #else
      Serial.println("Your development board is not supported by this library");
    #endif  
  }
}


void FC28Sensor::threshold(){
  if(percentage < 0){ percentage = 0; }     // lower limit
  if(percentage > 100){ percentage = 100; } // upper limit
}


void FC28Sensor::limit(uint8_t min_wet, uint8_t max_dry) {
  wetSoil = min_wet;
  drySoil = max_dry;
}


void FC28Sensor::vState(){
  Serial.println("\nValue: "+String(percentage,2)+"%"); // print to serial monitor: soil moisture value
  if(percentage >= wetSoil) { // if the sensor value indicates a wet condition then :
    Serial.println("Status: wet"); // print to serial monitor: wet soil conditions
  }
  else if(percentage > drySoil && percentage < wetSoil) { // if the sensor value indicates a moist condition then :
    Serial.println("Status: moist"); // print to serial monitor: moist soil conditions
  }
  else{ // if the sensor value is not in wet and moist conditions then :
    Serial.println("Status: dry"); // print to serial monitor: dry soil conditions
  }
}


void FC28Sensor::viewData() {
  if(nilaiADC != NULL){
    #if defined(ESP8266) 
      vState();
    #elif defined(ESP32)
      vState();
    #endif  
  }
}
