#include <Arduino.h>
#line 1 "/home/polygon/arduino/arduino_ros/arduino_ros.ino"
#line 1 "/home/polygon/arduino/arduino_ros/arduino_ros.ino"
void setup();
#line 6 "/home/polygon/arduino/arduino_ros/arduino_ros.ino"
void loop();
#line 1 "/home/polygon/arduino/arduino_ros/arduino_ros.ino"
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println("Hello World");
    delay(1000);
}
