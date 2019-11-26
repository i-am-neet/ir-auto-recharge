#include <IRremote.h>
#include <ros.h>
#include <std_msgs/String.h>
#include <HCSR04.h>

int RECV_PIN = 2;        // 使用數位腳位2接收紅外線訊號
IRrecv irrecv(RECV_PIN); // 初始化紅外線訊號輸入
decode_results results;  // 儲存訊號的結構
byte trig = 13,
     echo = 12;
UltraSonicDistanceSensor distanceSensor(trig, echo);
float Charging = 0;

byte RECV_CODE;
int left, center, right;
unsigned long LAST_TIME_LEFT;
unsigned long LAST_TIME_CENTER;
unsigned long LAST_TIME_RIGHT;

ros::NodeHandle nh;
std_msgs::String str_msg;
ros::Publisher chatter("recharge_ctrl", &str_msg);

void setup()
{
  nh.initNode();
  nh.advertise(chatter);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  //Serial.begin(115200);
  irrecv.blink13(false); // 設為true的話，當收到訊號時，腳位13的LED便會閃爍
  irrecv.enableIRIn();   // 啟動接收
}

void loop()
{
  bool stop = false;
  Charging = analogRead(A0);
  Charging = Charging / 1024 * 25;

  float distance = distanceSensor.measureDistanceCm();

  RECV_CODE = 0b000;
  if (irrecv.decode(&results)) { // 接收紅外線訊號並解碼
    if (results.value == 0xa30) {
      left = HIGH;
      LAST_TIME_LEFT = millis();
    }
    if (results.value == 0xa60) {
      center = HIGH;
      LAST_TIME_CENTER = millis();
    }
    if (results.value == 0xa90) {
      right = HIGH;
      LAST_TIME_RIGHT = millis();
    }
    /*
    Serial.print("results value is "); // 輸出解碼後的資料
    Serial.print(results.value, HEX);
    Serial.print(", bits is ");
    Serial.print(results.bits);
    Serial.print(", decode_type is ");
    Serial.println(results.decode_type);
    */
    irrecv.resume(); // 準備接收下一個訊號
  }
  if ((millis() - LAST_TIME_LEFT) > 500)
    left = LOW;
  if ((millis() - LAST_TIME_CENTER) > 500)
    center = LOW;
  if ((millis() - LAST_TIME_RIGHT) > 500)
    right = LOW;
  digitalWrite(5, left);
  digitalWrite(6, center);
  digitalWrite(7, right);
  if (Charging > 0) {
    str_msg.data = "STOP";
    chatter.publish(&str_msg);
  }else if (distance < 7 && distance > 0) {
    if (center && left && right) {
      str_msg.data = "STOP";
    }else {
      str_msg.data = "BACK";
    }
    chatter.publish(&str_msg);
  }else if (center) {
    if (left == HIGH and right == HIGH) {
      // All Light
      str_msg.data = "ALL";
      chatter.publish(&str_msg);
    }else if (left == HIGH and right == LOW) {
      // Left + Center
      str_msg.data = "CENTER_LEFT";
      chatter.publish(&str_msg);
    }else if (left == LOW and right == HIGH) {
      // Right + Center
      str_msg.data = "CENTER_RIGHT";
      chatter.publish(&str_msg);
    }else {
      // Center
      str_msg.data = "CENTER";
      chatter.publish(&str_msg);
    }
  }else {
    if (left) {
      // Left
      str_msg.data = "LEFT";
      chatter.publish(&str_msg);
    }
    if (right) {
      // Right
      str_msg.data = "RIGHT";
      chatter.publish(&str_msg);
    }
  }
  nh.spinOnce();
}
