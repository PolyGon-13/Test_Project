#include <SoftwareSerial.h>

#define BT_TXD 3
#define BT_RXD 2
SoftwareSerial bluetooth(BT_TXD, BT_RXD);

void setup()
{
    Serial.begin(9600);
    bluetooth.begin(9600);
}

void loop()
{
    if(bluetooth.available())
    {
        if
        Serial.write(bluetooth.read());
    }

    if(Serial.available())
    {
        // Serial.println("Serial Success!");
        bluetooth.write(Serial.read());
    }
}
// 아두이노 IDE에서는 휴대폰과 아두이노 주고받는 작업이 모두 가능한 것을 확인함
// 근데 VSCode에서는 휴대폰에서 아두이노로 전송하여 출력시키는 것은 가능한데, 아두이노에서 휴대폰으로 전송하여 출력하는 작업이 안된다. 위 코드에 주석처리된 print도 잘 되는 것으로 보아 뭔가 설정을 덜 해줬거나 VSCode의 문제인 듯하다.
