#include <Arduino.h>
#line 1 "/home/polygon/arduino/arduino_ros/arduino_ros.ino"
#include <SoftwareSerial.h>

#define BT_TXD 3
#define BT_RXD 2
SoftwareSerial bluetooth(BT_TXD, BT_RXD);

String receiveText = "";

#line 9 "/home/polygon/arduino/arduino_ros/arduino_ros.ino"
void setup();
#line 19 "/home/polygon/arduino/arduino_ros/arduino_ros.ino"
void loop();
#line 9 "/home/polygon/arduino/arduino_ros/arduino_ros.ino"
void setup()
{
    pinMode(9, OUTPUT); // red
    pinMode(10, OUTPUT); // green
    pinMode(11, OUTPUT); // blue

    Serial.begin(9600);
    bluetooth.begin(9600);
}

void loop()
{
    
}
