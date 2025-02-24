#define LED_PIN 32

bool ledState = false;

void setup() {
  // put your setup code here, to run once:
  // Serial.begin(9600);
  // Serial.println("start");
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println("hello, world");
  // delay(1000);
  // digitalWrite(32, HIGH);
  if (!ledState) {
    delay(1000 * 60 * 30);
    ledState = true;
  }

  while (true) {
    digitalWrite(LED_PIN, LOW);
    delay(1000);
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
  }

  // digitalWrite(32, LOW);
}
