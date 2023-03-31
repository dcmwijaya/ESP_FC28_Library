// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#include <ESP32_FC28.h> // Library declaration
#define SensorFC28_Pin 34 // Sensor pin declaration
float soil_moisture; // Variable declaration

FC28Sensor mySensor; // Calls the FC28Sensor class declared as the mySensor object.

void setup() {
  // Initialize this sensor through the initFC28Sensor method. It is accessed from the mySensor object.
  mySensor.initFC28Sensor(115200, SensorFC28_Pin); // Default baudrate for ESP32:115200 & FC28 Sensor Pin used: 34
}

void loop() {
  soil_moisture = mySensor.getSoilMoisture(); // Calls soil moisture data through the getSoilMoisture method. It is accessed from the mySensor object.
  Serial.println("Soil Moisture Value: "+String(soil_moisture,2)); // Prints the soil moisture value
}
