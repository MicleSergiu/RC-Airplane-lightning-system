int ledWing_left = 1;   //red
int ledWing_right = 2;  //green
int ledFuselage = 3;    //white

void setup() {
  pinMode(ledWing_left, OUTPUT);
  pinMode(ledWing_right, OUTPUT);
  pinMode(ledFuselage, OUTPUT);
}

void loop() {
  Wing();
  Fuselage();
}

void Wing()
{
  digitalWrite(ledWing_left, HIGH);
  digitalWrite(ledWing_right, HIGH);
  delay(50);
  digitalWrite(ledWing_left, LOW);
  digitalWrite(ledWing_right, LOW);
  delay(200);
  digitalWrite(ledWing_left, HIGH);
  digitalWrite(ledWing_right, HIGH);
  delay(50);
  digitalWrite(ledWing_left, LOW);
  digitalWrite(ledWing_right, LOW);
  delay(1000);
}

void Fuselage()
{
  digitalWrite(ledFuselage, HIGH);
  delay(50);
  digitalWrite(ledFuselage, LOW);
  delay(1000);
}