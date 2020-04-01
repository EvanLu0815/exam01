#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{
    uLCD.background_color(BLACK);
    uLCD.color(BLUE);
    uLCD.printf("\n106061123\n"); //Default Green on black text
    uLCD.line(15, 15, 15, 30, WHITE);
    uLCD.line(15, 30, 30, 30, WHITE);
    uLCD.line(30, 30, 30, 15, WHITE);
    uLCD.line(30, 15, 15, 15, WHITE);

}