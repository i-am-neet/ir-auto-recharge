#include <IRremote.h>

IRsend irsend0; // pin 9
IRsend1 irsend1; // pin 13
IRsend2 irsend2; // pin 5

void setup()
{
  Serial.begin(9600);
}

void loop() {
  irsend0.sendNEC(0xFE50AF, 32);
  Serial.println("sending on pin 9");
  delay(10000);
  irsend1.sendNEC(0xFE50AF, 32);
  Serial.println("sending on pin 13");
  delay(10000);
  irsend2.sendNEC(0xFE50AF, 32);
  Serial.println("sending on pin 5");
  delay(10000);
}
