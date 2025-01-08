#include <AFMotor.h>
AF_DCMotor motor2(2);
AF_DCMotor motor4(4);
void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);
  motor2.setSpeed(200);//set the speed to 200/255
  motor4.setSpeed(200);//set the speed to 200/255
}
void loop() {

  if (digitalRead(A2) == 1)
  {
    motor4.run(FORWARD);//turn it on going forward
    motor2.run(RELEASE);//stopped
  }
  else if (digitalRead(A1) == 1)
  {
    motor2.run(FORWARD);
    motor4.run(FORWARD);
  }
  else if (digitalRead(A0) == 1) {
    motor2.run(RELEASE);//stopped
    motor4.run(FORWARD);//stopped
  }
   else { 
  motor2.run(RELEASE);//stopped
  motor4.run(RELEASE);//stopped  
  }
  
}
