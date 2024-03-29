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
  
  if(isnan(nilaiADC)){
    Serial.println(F("Failed to read the value from the FC-28 sensor !!")); 
    return;
  }
  else{
    #if defined(ESP8266)
      percentageESP8266 = (100 - ((nilaiADC/1023) * 100)); // 10 bit => ADC resolution: 1023
      if(percentageESP8266 < 0){ percentageESP8266 = 0; } if(percentageESP8266 > 100){ percentageESP8266 = 100; } // threshold

    #elif defined(ESP32)
      percentageESP32 = (100 - ((nilaiADC/4095) * 100)); // 12 bit => ADC resolution: 4095
      if(percentageESP32 < 0){ percentageESP32 = 0; } if(percentageESP32 > 100){ percentageESP32 = 100; } // threshold

    #else
      Serial.println(F("Your development board is not supported by this library"));

    #endif  
  }
}


void FC28Sensor::limit(uint8_t min_wet, uint8_t max_dry) {
  wetSoil = min_wet;
  drySoil = max_dry;
}


void FC28Sensor::viewData() {
  if(!isnan(nilaiADC)){
    #if defined(ESP8266)
      Serial.println(F("Value: "+String(percentageESP8266,2)+"%")); // print to serial monitor: soil moisture value
      if(percentageESP8266 >= wetSoil) { // if the sensor value indicates a wet condition then :
        Serial.println(F("Status: wet\n")); // print to serial monitor: wet soil conditions
      }
      else if(percentageESP8266 > drySoil && percentageESP8266 < wetSoil) { // if the sensor value indicates a moist condition then :
        Serial.println(F("Status: moist\n")); // print to serial monitor: moist soil conditions
      }
      else{ // if the sensor value is not in wet and moist conditions then :
        Serial.println(F("Status: dry\n")); // print to serial monitor: dry soil conditions
      }

    #elif defined(ESP32)
      Serial.println(F("Value: "+String(percentageESP32,2)+"%")); // print to serial monitor: soil moisture value
      if(percentageESP32 >= wetSoil) { // if the sensor value indicates a wet condition then :
        Serial.println(F("Status: wet\n")); // print to serial monitor: wet soil conditions
      }
      else if(percentageESP32 > drySoil && percentageESP32 < wetSoil) { // if the sensor value indicates a moist condition then :
        Serial.println(F("Status: moist\n")); // print to serial monitor: moist soil conditions
      }
      else{ // if the sensor value is not in wet and moist conditions then :
        Serial.println(F("Status: dry\n")); // print to serial monitor: dry soil conditions
      }
    
    #endif  
  }
}
