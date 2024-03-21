// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#ifndef ESP_FC28_H
#define ESP_FC28_H

#include <Arduino.h>

class FC28Sensor{
  public:
    void begin(int pin);
    void limit(int min_wet, int max_dry);
    void viewData();
    float getSoilMoisture();

  private:
    int _pin, wetSoil, drySoil;
    float analogFC28, value;
};

#endif