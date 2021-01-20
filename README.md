# Hello Arduino

This project is about controlling traffic lights with a sound detector. Using an Arduino to control and power the equipment attached to a breadboard allows the sound meter to detect sound and respond to you with the traffic lights starting to switch from red, yellow, green, off and then repeats the process as soon as it detects a sound. 

## Equipment

- Arduino Uno
- Breadboard
- Sound Detector Module https://www.electrokit.com/produkt/ljudsensor-analogdigital/
- 7 Wires
- 3 LEDs and 3 Resistors

## Instructions
Start by pasting the digital output code for the sound detector module. https://www.electrokit.com/uploads/productfile/41015/41015706_-_Microphone.pdf

Then reassign the buttonpin to 2 and remove the variable "int Led = 13;". The buttonpin is for the the digital output sensor. And "int Led = 13" was a variable for to test the sound module using an LED connected to pin 13.

In the void setup function, start by removing the "pinMode (Led, OUTPUT);" and adding pinMode for every LED, in this case green LED, 13, yellow, 12 and red is 8. Example, pinMode ( 13, OUTPUT); pinMode represents the pin on the arduino.

You will haft to create 3 functions for every LEDs, the function should look like this, "void x()" (x is for whatever you want to call your LEDs), for example, "void green()". Make sure the functions are arranged in order, so for traffic lights its the function for red LEDs to come first, after that yellow and red etc. 

The 3 functions will be based on digitalWrite, for the traffic lights there should be 3 digitalWrite existing in every function, and should be set as HIGH on par with the color the function is representing. DigitalWrite(pin, HIGH or LOW), HIGH represents on and LOW off. So for example, void red() should look like this :

void red()
{
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, HIGH);
}

If you would like to, you could also have the set red to HIGH in the void yellow() function to mimic a real traffic light. 

The digitalRead(buttonpin) is set to read the input pin thats going to be connected to your sound detector.
If the value is set to HIGH it should turn off the LEDs so to make sure of that you'll need to set every LED to LOW using digitalWrite. Therefore remove the first indented line after the If function and replace it with digitalWrite setting every LED to LOW(off).

In the "else" department, you should make sure to run the LED functions(in order too, red, yellow and green). For example "red();". Implement delay between every LED function you are going to run, so after "red();", write delay(value)
beneath it.

Now the code is completed.

## About Me

My name is Adam and I'm a student at Tullinge gymnasium. Dont be harsh on me im new and learning. ^^
