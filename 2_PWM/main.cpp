#include "mbed.h"


PwmOut PWM1(D6);


int main() {
  while(1) {
  PWM1.period(0.001);
  PWM1 = 0;
  wait(0.1);
  PWM1 = 0.1;
  wait(0.1);
  PWM1 = 0.2;
  wait(0.1);
  PWM1 = 0.3;
  wait(0.1);
  PWM1 = 0.4;
  wait(0.1);
  PWM1 = 0.5;
  wait(0.1);
  PWM1 = 0.6;
  wait(0.1);
  PWM1 = 0.7;
  wait(0.1);
  PWM1 = 0.8;
  wait(0.1);
  PWM1 = 0.9;
  wait(0.1);
  PWM1 = 1;
  wait(0.1);
  PWM1 = 0.9;
  wait(0.1);
  PWM1 = 0.8;
  wait(0.1);
  PWM1 = 0.7;
  wait(0.1);
  PWM1 = 0.6;
  wait(0.1);
  PWM1 = 0.5;
  wait(0.1);
  PWM1 = 0.4;
  wait(0.1);
  PWM1 = 0.3;
  wait(0.1);
  PWM1 = 0.2;
  wait(0.1);
  PWM1 = 0.1;
  wait(0.1);
  PWM1 = 0;
  wait(0.1);
  }
}