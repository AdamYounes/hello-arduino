#include <Arduino.h>

int Led = 4 ;// define LED
int buttonpin = 13; // define D0 Sensor
int val = 0; // define numeric variables val
void setup ()
{
 pinMode (Led, OUTPUT) ; // define LED as output
 pinMode (buttonpin, INPUT) ; // output D0 is defined sensor
}
void loop ()
{
 val = digitalRead(buttonpin); // read pin 3 to val
 if (val == HIGH) // When sound is detected, LED flashes
 {
 digitalWrite (Led, LOW);
 }
 else
 {
    void green()
    {
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(8, LOW);
    }
 }
}