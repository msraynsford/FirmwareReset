#include "FirmwareReset.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);  Serial.printf("\nFirmware Reset Example\n");
  
  // Set up the LED as a status indicator
  pinMode(LED_BUILTIN, OUTPUT); digitalWrite(LED_BUILTIN, HIGH);

  //Check to see if the flag is still set from the previous boot
  if(checkResetFlag()) {
    //Do the firmware reset here
    Serial.printf("Reset Firmware\n");
  } 
}

void loop() {
  // put your main code here, to run repeatedly:
  BuiltInLED(true);
  delay(500);

  BuiltInLED(false);
  delay(500);
}


