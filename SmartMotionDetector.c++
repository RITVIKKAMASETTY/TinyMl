int led = 2;
int eventCount = 0;
void setup() {
Serial.begin(115200);
pinMode(led, OUTPUT);
randomSeed(analogRead(0));
Serial.println("=================================");
Serial.println(" SMART MOTION DETECTION SYSTEM ");
Serial.println(" ESP32 Simulation Started ");
Serial.println("=================================");
}
void loop() {
int motion = random(0, 2); // simulate motion (0 or 1)
eventCount++;
Serial.println("\n------------------------------");
Serial.print("Event #: ");
Serial.println(eventCount);
if(motion == 1){
Serial.println("Status : Motion Detected");
Serial.println("Action : LED ON");
Dept.AIMl, DSCE AY 2025-26 10
digitalWrite(led, HIGH);} else {
Serial.println("Status : No Motion");
Serial.println("Action : LED OFF"); digitalWrite(led, LOW);}
Serial.print("GPIO State : ");
Serial.println(digitalRead(led));Serial.println("------------------------------");delay(1000);}