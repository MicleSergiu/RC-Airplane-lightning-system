int led_pin = 1;

void setup() {
  pinMode(led_pin, OUTPUT);

}

void loop() {
  digitalWrite(led_pin, HIGH);
  delay(50);
  digitalWrite(led_pin, LOW);
  delay(200);
  digitalWrite(led_pin, HIGH);
  delay(50);
  digitalWrite(led_pin, LOW);
  delay(2000);
}
