#include <Arduino.h>


unsigned long currentTimeMillis = 0;

void setup() {
  Serial.begin(19200);
  delay(3000);
  Serial.println(F("Setup begins...."));


  // put your setup code here, to run once:
   pinMode(A0, OUTPUT);


   Serial.println(F("Setup done."));
}

void loop() {
  currentTimeMillis = millis();

  int source0 = (int)(sin(currentTimeMillis / 1000.0 * 2.0 * 3.14159264358 * 57.0) * 127.0 + 127.0) ;

  analogWrite(A0, source0);

  
  // put your main code here, to run repeatedly:

  delay(1);
}
