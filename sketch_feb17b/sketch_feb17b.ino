#include <Servo.h>
Servo myServo;
char serialData;
int servo = A0;

void setup() {
  myServo.attach(servo);
  Serial.begin(9600);
}

void loop() {
  myServo.write(0);
  if (Serial.available()>0)
  {
    serialData = Serial.read();

    if (serialData = 'A'){
      myServo.write(150);
      delay(5000);
    }
  }
}
