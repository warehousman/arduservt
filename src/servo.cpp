#include <Arduino.h>
#include <MeMCore.h>
Servo servo_3_1;
MePort port_3(3);
void setup(){
      servo_3_1.attach(port_3.pin1());
      servo_3_1.write(0);
Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 180; i = i + 10) {
  delay(1000);
  Serial.println (i);
  servo_3_1.write(i);
  }
}
