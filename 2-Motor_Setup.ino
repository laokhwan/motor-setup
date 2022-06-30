#include "src/Motor.h"
#define DirectionPin 4
#define BaudRate 115200

void setup() {
  // put your setup code here, to run once:
  Motor.begin(BaudRate, DirectionPin, &Serial2);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Motor.turnWheel(1,LEFT,50);
  Motor.turnWheel(2,RIGHT,50);
  delay(5000);

  Motor.turnWheel(1,LEFT,0);
  Motor.turnWheel(2,RIGHT,0);
  delay(1000);

}
