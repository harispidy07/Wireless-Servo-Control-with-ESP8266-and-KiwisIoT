#include <KiwisIoT.h>
#include <Servo.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);
Servo myServo;

#define SERVO_PIN D2

void onControl(String ch, String val)
{
  if (ch != "0") return;

  int angle = val.toInt();

  if (angle >= 0 && angle <= 180)
  {
    myServo.write(angle);

    Serial.print("Servo angle: ");
    Serial.println(angle);
  }
}

void setup()
{
  Serial.begin(115200);

  myServo.attach(SERVO_PIN);
  myServo.write(90);

  kiwisiot.begin();
  kiwisiot.onReceive(onControl);

  Serial.println("Servo Control Ready");
}

void loop()
{
  kiwisiot.run();
}