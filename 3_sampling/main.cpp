#include "mbed.h"


PwmOut PWM1(D7);
Serial pc( USBTX, USBRX );
int sample = 128;
int i, j;
float ADCdata[128];

int main() {
    for (j = 0; i < sample; j++) {
        PWM1.period(0.001);
        for (i = 0; i <= 1; i += 0.1) {
            PWM1 = i;
            wait(0.1);
            ADCdata[j] = PWM1;
            wait(1.0/sample);
            j++;
        }
        for (i = 0.9; i >= 0; i -= 0.1) {
            PWM1 = i;
            ADCdata[j] = PWM1;
            wait(0.1);
            ADCdata[j] = PWM1;
            wait(1.0 / sample);
            j++;
        }
    }
    for (i = 0; i < sample; i++) {
        pc.printf("%1.3f\r\n", ADCdata[i]);
        wait(0.1);
    }
}