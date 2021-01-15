#include <Arduino.h>


int buttonpin = 2; // define D0 Sensor
int val = 0; // define numeric variables val
void setup ()
{
 pinMode (buttonpin, INPUT) ; // output D0 is defined sensor
 pinMode (13, OUTPUT);
 pinMode (12, OUTPUT);
 pinMode (8, OUTPUT);
}

void green()
{
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
}

void yellow()
{
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
}

void red()
{
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, HIGH);
}

void loop ()
{
 val = digitalRead(buttonpin); // read pin 3 to val
 if (val == HIGH) // When sound is detected, LED flashes
 {
    digitalWrite (13, LOW);
    digitalWrite (12, LOW);
    digitalWrite (8, LOW);
 }
 else
 {
    red();
    delay(2600);
    yellow();
    delay(2600);
    green();
    delay(2600);
 }
}