// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#include "ESP_FC28.h"

FC28Sensor::FC28Sensor(uint8_t pin) {
  _pin = pin;
}


void FC28Sensor::begin() {
  pinMode(_pin, INPUT_PULLUP);
}


float FC28Sensor::calibration(float cbr) {
  adjust = cbr;
  return adjust;
}


void FC28Sensor::threshold() {
  if (percentage < 0) { percentage = 0; }     // lower limit
  if (percentage > 100) { percentage = 100; } // upper limit
}


float FC28Sensor::getSoilMoisture() {
  ADCvalue = analogRead(_pin);

  if (ADCvalue == NULL) {
    Serial.println("Failed to read the value from the FC-28 sensor !!"); 
    percentage = 0;
    return percentage;
  }
  else {
    #if defined(ESP8266)
      percentage = ((100 - ((ADCvalue/1023) * 100))-adjust); // 10 bit => ADC resolution: 1023
      threshold();
      return percentage;
    #elif defined(ESP32)
      percentage = ((100 - ((ADCvalue/4095) * 100))-adjust); // 12 bit => ADC resolution: 4095
      threshold();
      return percentage;
    #else
      Serial.println("Your development board is not supported by this library");
    #endif  
  }
}


void FC28Sensor::limit(uint8_t min_wet, uint8_t max_dry) {
  wetSoil = min_wet;
  drySoil = max_dry;
}


void FC28Sensor::vState() {
  Serial.println("\nValue: "+String(percentage,2)+"%");
  if (wetSoil != NULL && drySoil != NULL) {
    if (percentage >= wetSoil) {
      Serial.println("Status: wet");
    }
    else if (percentage > drySoil && percentage < wetSoil) {
      Serial.println("Status: moist");
    }
    else {
      Serial.println("Status: dry");
    }
  }
}


void FC28Sensor::viewData() {
  if (ADCvalue != NULL) {
    #if defined(ESP8266) 
      vState();
    #elif defined(ESP32)
      vState();
    #endif  
  }
}
