int red = D2;
int yellow = D3;
int green = D4;
void setup() {
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
Serial.begin(115200);
Serial.println("! " #
* Smart Traffic Light System Started");
}
void loop() {
// RED
Serial.println("+ RED Light - STOP");
digitalWrite(red, HIGH);
digitalWrite(yellow, LOW);
digitalWrite(green, LOW);
delay(2000);
// YELLOW
Serial.println(", YELLOW Light - READY");
digitalWrite(red, LOW);
digitalWrite(yellow, HIGH);
digitalWrite(green, LOW);
delay(1000);
// GREEN
Dept.AIMl, DSCE AY 2025-26 16
Serial.println("- GREEN Light - GO");
digitalWrite(red, LOW);
digitalWrite(yellow, LOW);
digitalWrite(green, HIGH);
delay(2000);
}