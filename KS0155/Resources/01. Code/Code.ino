#include <Max3421e.h>
#include <Usb.h>
#include <AndroidAccessory.h>
#define LED 9
AndroidAccessory acc("Google, Inc.",
"DemoKit",
"DemoKit Arduino Board",
"1.0",
"http://www.android.com",
"0000000012345678");
void setup()
{
Serial.begin(115200);
Serial.print("\r\nStart");
acc.powerOn();
pinMode(LED, OUTPUT);
digitalWrite(LED, 0);
}
void loop()
{
byte msg[3];
if (acc.isConnected()) {
Serial.print("Accessory connected. ");
int len = acc.read(msg, sizeof(msg), 1);
Serial.print("Message length: ");
Serial.println(len, DEC);
if (len > 0) {
// assumes only one command per packet
if (msg[0] == 0x2) {
if (msg[1] == 0x0)
analogWrite(LED, msg[2]);
}
}
}
delay(100);
}
