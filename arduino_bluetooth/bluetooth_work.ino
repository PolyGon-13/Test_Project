#include <SoftwareSerial.h>

#define BT_TXD 3
#define BT_RXD 2
SoftwareSerial bluetooth(BT_TXD, BT_RXD);

String receiveText = "";

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

    receiveText = ""; // 매번 텍스트를 초기화하여 입력받은 텍스트가 쌓이지 않도록 함
}
