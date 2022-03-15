#define PIN_OUT_L 17
#define PIN_OUT_R 16
#define PIN_IN_H 13

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_IN_H, INPUT_PULLUP);
  pinMode(PIN_OUT_L, OUTPUT);
  pinMode(PIN_OUT_R, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(PIN_IN_H));
  if (digitalRead(PIN_IN_H)) {
    digitalWrite(PIN_OUT_L, HIGH);
    digitalWrite(PIN_OUT_R, HIGH);
    delay(800);
    digitalWrite(PIN_OUT_L, LOW);
    digitalWrite(PIN_OUT_R, LOW);
    delay(800);
  }
}
