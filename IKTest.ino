
#include "meArm.h"
#include <Servo.h>

int basePin = 11;
int shoulderPin = 10;
int elbowPin = 9;
int gripperPin = 6;

meArm arm;
void setup() {
  arm.begin(basePin, shoulderPin, elbowPin, gripperPin);
  pinMode(7,INPUT);
}

void loop() {
 
 
  delay(500);
  arm.gotoPoint(-90,130,140);
  arm.openGripper();
  arm.closeGripper();
  if(arm.gotoPoint(90,130,60)==1){
    delay(1000);
     arm.openGripper();
    };
  arm.gotoPoint(70,200,10);
  arm.gotoPoint(0,100,50);
  delay(1000);
}
