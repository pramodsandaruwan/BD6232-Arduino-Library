/*
  BD6232 Library
  Call BD6232 before calling other functions
  
  V1.0 Jan.17.2020 by Pramod Sandaruwan

*/
#include "Arduino.h"
#include "BD6232.h"

BD6232::BD6232(){
  pinMode(INA, OUTPUT);
  pinMode(INB, OUTPUT);
}

void BD6232::attach(int PIN_1, int PIN_2){
  PIN_1 = INA;
  PIN_2 = INB;
  pinMode(INA, OUTPUT);
  pinMode(INB, OUTPUT);
}

void BD6232::forward(int speed){
  analogWrite(INA, speed);
  analogWrite(INB, 0);
}

void BD6232::backward(int speed){
  analogWrite(INA, 0);
  analogWrite(INB, speed);
}

void BD6232::drive(int PWM){
  PWM = constrain(PWM, -255, 255);
  if (!PWM == 0) {
    analogWrite(INA, abs(PWM) * (1 + PWM / abs(PWM)) / 2);
    analogWrite(INB, abs(PWM) * (1 - PWM / abs(PWM)) / 2);
  }
  else {
    analogWrite(INA, 0);
    analogWrite(INB, 0);
  }
}

void BD6232::STOP(){
  analogWrite(INA, 0);
  analogWrite(INB, 0);
}