// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#ifndef FC28_H
#define FC28_H

#include <Arduino.h>

class FC28Sensor{
  public:
    void initFC28Sensor(int baudRate, int pin);
    float getSoilMoisture();

  private:
    int _pin;
    float analogFC28, value;
};

#endif