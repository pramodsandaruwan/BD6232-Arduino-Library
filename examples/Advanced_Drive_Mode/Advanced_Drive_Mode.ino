#include <BD6232.h>

BD6232 motorOne;

int motorOneINA = 9;
int motorOneINB = 10;

void setup() {

motorOne.attach(motorOneINA,motorOneINB);

}

void loop() {
  motorOne.drive(255);  // Input PWM value -255 to +255
  delay(500);
  motorOne.drive(0);
  delay(150);
  motorOne.drive(-255);
  delay(500);
  motorOne.drive(0);
  delay(150);
}
