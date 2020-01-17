#include <BD6232.h>

BD6232 motorOne;

int motorOneINA = 9;
int motorOneINB = 10;

void setup() {

motorOne.attach(motorOneINA,motorOneINB);

}

void loop() {
  motorOne.forward(255);  // Input PWM value 0 to 255
  delay(500);
  motorOne.STOP();
  delay(150);
  motorOne.backward(255);
  delay(500);
  motorOne.STOP();
  delay(150);
}
