// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#include "ESP_FC28.h" // library declaration

#define FC28Pin 15 // fc-28 pin declaration
#define wetSoil 60 // define the minimum value that is considered as 'wet' soil
#define drySoil 40 // define the maximum value that is considered as 'dry' soil

FC28Sensor fc28(FC28Pin); // create a new object with the name fc28 to hold the FC28Sensor class

void setup() {
  Serial.begin(115200); // default baudrate for the ESP board
  fc28.begin(); // initiate fc-28 sensor
}

void loop() {
  fc28.getSoilMoisture(); // calls soil moisture data through the getSoilMoisture method
  fc28.limit(wetSoil,drySoil); // minimum limit for wet and maximum limit for dry
  fc28.viewData(); // print to serial monitor: soil moisture value & status
  delay(3000); // delay for 3 seconds
}
