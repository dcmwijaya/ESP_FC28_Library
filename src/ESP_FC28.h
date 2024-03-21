// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#ifndef ESP_FC28_H
#define ESP_FC28_H

#include <Arduino.h>

class FC28Sensor{
  public:
    void initFC28Sensor(int baudRate, int pin);
    void threshold(int min_wet, int max_dry);
    void measurementView();
    float getSoilMoisture();

  private:
    int _pin, wetSoil, drySoil;
    float analogFC28, value;
};

#endif