// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#include "FC28.h" // library declaration
FC28Sensor mySensor; // calls the FC28Sensor class declared as the mySensor object

#define SensorFC28_Pin 15 // sensor pin declaration

#define wetSoil 30 // define the minimum value that is considered as 'wet' soil
#define drySoil 20 // define the maximum value that is considered as 'dry' soil

float sensorValue; // variable declaration

void setup() {
  // calls the initFC28Sensor method for sensor initialization
  mySensor.initFC28Sensor(115200, SensorFC28_Pin); // input baudrate and sensor pin values
}

void loop() {
  sensorValue = mySensor.getSoilMoisture(); // calls soil moisture data through the getSoilMoisture method
  Serial.println("Soil Moisture Value: "+String(sensorValue,2)+"%"); // print to serial monitor: soil moisture value

  // determine status of soil
  if(sensorValue >= wetSoil) { // if the sensor value is greater than equal to 30% then :
    Serial.println("Status: wet"); // print to serial monitor: wet soil conditions
  }
  else if(sensorValue > drySoil && sensorValue < wetSoil) { // if the sensor value is within the range of 21% - 29% then :
    Serial.println("Status: moist"); // print to serial monitor: moist soil conditions
  }
  else{ // if the sensor value is not in wet and moist conditions then :
    Serial.println("Status: dry"); // print to serial monitor: dry soil conditions
  }

  delay(3000); // delay for 3 seconds
}
