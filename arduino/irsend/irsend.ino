/*
 * IRRemote 紅外線遙控教學
 *   範例 2.1: 發射紅外線訊號
 *     注意! 紅外線發射器(IR LED)必須接到 pin 3, 不能接其它腳位
 *
 * alexbloggt 修改IRRemote，可以使用3個Transmitter
 * GitHub: https://github.com/alexbloggt/Arduino-IRremote/tree/alexbloggt-patch-1
 * IRsend irsend0;  // pin 3
 * IRsend1 irsend1; // pin 10
 * IRsend2 irsend2; // pin 9
 */
#include <IRremote.h>                    // 引用 IRRemote 函式庫

IRsend irsend0;                           // 定義 IRsend 物件來發射紅外線訊號
IRsend1 irsend1;                         // pin 9
IRsend2 irsend2;                         // pin 5

void setup()
{

}

void loop() 
{
  irsend0.sendSony(0xa30, HEX);
  delay(50);
  irsend1.sendSony(0xa60, HEX);
  delay(50);
  irsend2.sendSony(0xa90, HEX);
  delay(50);
}
