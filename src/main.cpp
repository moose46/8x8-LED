
// 8x8 LED
#include <Arduino.h>
#include "LedControl.h"
#include "binary.h"

#define DIN 12 // pin 12
#define CLK 11 // pin 13
#define CS 10  // pin 14
// put function declarations here:
int myFunction(int, int);

LedControl lc = LedControl(DIN, CLK, CS);
void setup()
{
  // put your setup code here, to run once:
  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);
  lc.setLed(0, 5, 5, true);
}

void loop()
{
  // put your main code here, to run repeatedly:
  lc.setLed(0, 0, 0, true);
  delay(1000);
  lc.setLed(0, 7, 7, true);
  delay(1000);
  lc.setLed(0, 0, 0, false);
  delay(1000);
  lc.setLed(0, 7, 7, false);
  delay(1000);
}
