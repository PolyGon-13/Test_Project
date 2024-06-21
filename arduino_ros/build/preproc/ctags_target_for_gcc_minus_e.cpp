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
    int green = random(0, 256);
    int blue = random(0, 256);
    int red = random(256);

    while(bluetooth.available())
    {
        char c = bluetooth.read();
        receiveText += c;
        delay(5);
    }

    if(receiveText.length()>0)
    {
        if(receiveText.indexOf("blue")!=-1)
        {
            analogWrite(11, 255);
            analogWrite(10, 0);
            analogWrite(9, 0);
            delay(100);
        }
        else if(receiveText.indexOf("green")!=-1)
        {
            analogWrite(10, 255);
            analogWrite(9, 0);
            analogWrite(11, 0);
            delay(100);
        }
        else if(receiveText.indexOf("red")!=-1)
        {
            analogWrite(9, 255);
            analogWrite(10, 0);
            analogWrite(11, 0);
            delay(100);
        }
        else
        {
            analogWrite(9, 0);
            analogWrite(10, 0);
            analogWrite(11, 0);
            delay(1000);
        }
    }

    receiveText = "";
}
