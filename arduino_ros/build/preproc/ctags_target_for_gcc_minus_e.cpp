# 1 "/home/polygon/arduino/arduino_ros/arduino_ros.ino"
# 2 "/home/polygon/arduino/arduino_ros/arduino_ros.ino" 2



SoftwareSerial bluetooth(3, 2);

String receiveText = "";

void setup()
{
    pinMode(9, 0x1); // red
    pinMode(10, 0x1); // green
    pinMode(11, 0x1); // blue

    Serial.begin(9600);
    bluetooth.begin(9600);
}

void loop()
{

}
