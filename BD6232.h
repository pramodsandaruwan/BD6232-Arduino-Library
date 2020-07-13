/*
  BD6232 Library
  Testing git
  V1.0 Jan.17.2020 by Pramod Sandaruwan
*/

#ifndef BD6232_H
#define BD6232_H

#include "Arduino.h"

class BD6232{
  public:
    BD6232();
    void attach(int PIN_1, int PIN_2);
    void forward(int speed);
    void backward(int speed);
    void drive(int PWM);
    void STOP();
  private:
    int INA;
    int INB;
};

#endif
