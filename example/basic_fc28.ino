// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#include "ESP_FC28.h" // library declaration
FC28Sensor mySensor; // calls the FC28Sensor class declared as the mySensor object

#define SensorFC28_Pin 15 // sensor pin declaration

#define wetSoil 60 // define the minimum value that is considered as 'wet' soil
#define drySoil 40 // define the maximum value that is considered as 'dry' soil

float sensorValue; // variable declaration

void setup() {
  // calls the initFC28Sensor method for sensor initialization
  mySensor.initFC28Sensor(115200, SensorFC28_Pin); // input baudrate and sensor pin values
}

void loop() {
  sensorValue = mySensor.getSoilMoisture(); // calls soil moisture data through the getSoilMoisture method
  mySensor.threshold(wetSoil,drySoil); // minimum limit for wet and maximum limit for dry
  mySensor.measurementView(); // print to serial monitor: soil moisture value & status
  delay(3000); // delay for 3 seconds
}
