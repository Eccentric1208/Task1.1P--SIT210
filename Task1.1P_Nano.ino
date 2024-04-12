

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
}

void loop() {
  int sensorVal = digitalRead(2);
  Serial.println(sensorVal);
  if (sensorVal == HIGH) {
    digitalWrite(3, LOW);


  } else {
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(2000);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(2000);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(2000);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(2000);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(1000);
  }
}
