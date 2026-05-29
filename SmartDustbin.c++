
int led = 7;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0)); // seed for randomness
  pinMode(led, OUTPUT);
}

void loop() {
  int distance = random(5, 100); // random distance between 5–100 cm

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Bin logic
  if (distance < 20) {
    Serial.println(" Bin Full");
    digitalWrite(led, HIGH);
  } else {
    Serial.println(" Bin Empty");
    digitalWrite(led, LOW);
  }

  Serial.println("------------------");

  delay(1000);
}