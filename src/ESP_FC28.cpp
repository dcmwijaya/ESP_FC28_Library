// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#include "ESP_FC28.h"

FC28Sensor::FC28Sensor(uint8_t pin) {
  _pin = pin;
}


void FC28Sensor::begin() {
  pinMode(_pin, INPUT);
}


void FC28Sensor::getSoilMoisture() {
  nilaiADC = analogRead(_pin);
  if(nilaiADC == NULL){
    Serial.println("Failed to read the value from the FC-28 sensor !!"); 
    return;
  }
  else{
    #if defined(ESP8266)
      percentage = (100 - ((nilaiADC/1023) * 100)); // 10 bit => ADC resolution: 1023
      if(percentage < 0){ percentage = 0; } if(percentage > 100){ percentage = 100; } // threshold
    #elif defined(ESP32)
      percentage = (100 - ((nilaiADC/4095) * 100)); // 12 bit => ADC resolution: 4095
      if(percentage < 0){ percentage = 0; } if(percentage > 100){ percentage = 100; } // threshold
    #else
      Serial.println("Your development board is not supported by this library");
    #endif  
  }
}


void FC28Sensor::limit(uint8_t min_wet, uint8_t max_dry) {
  wetSoil = min_wet;
  drySoil = max_dry;
}


void FC28Sensor::viewData() {
  if(nilaiADC != NULL){
    #if defined(ESP8266)
      Serial.println("Value: "+String(percentage,2)+"%"); // print to serial monitor: soil moisture value
      if(percentage >= wetSoil) { // if the sensor value indicates a wet condition then :
        Serial.println("Status: wet\n"); // print to serial monitor: wet soil conditions
      }
      else if(percentage > drySoil && percentage < wetSoil) { // if the sensor value indicates a moist condition then :
        Serial.println("Status: moist\n"); // print to serial monitor: moist soil conditions
      }
      else{ // if the sensor value is not in wet and moist conditions then :
        Serial.println("Status: dry\n"); // print to serial monitor: dry soil conditions
      }
    #elif defined(ESP32)
      Serial.println("Value: "+String(percentage,2)+"%"); // print to serial monitor: soil moisture value
      if(percentage >= wetSoil) { // if the sensor value indicates a wet condition then :
        Serial.println("Status: wet\n"); // print to serial monitor: wet soil conditions
      }
      else if(percentage > drySoil && percentage < wetSoil) { // if the sensor value indicates a moist condition then :
        Serial.println("Status: moist\n"); // print to serial monitor: moist soil conditions
      }
      else{ // if the sensor value is not in wet and moist conditions then :
        Serial.println("Status: dry\n"); // print to serial monitor: dry soil conditions
      }
    #endif  
  }
}
