#define LED_PIN 13  // Connected to GPIO 13

void setup() {
  // Tell the ESP32 that pin 13 is an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Turn LED ON
  delay(1000);                 // Wait 1 second
  digitalWrite(LED_PIN, LOW);  // Turn LED OFF
  delay(1000);                 // Wait 1 second
}
