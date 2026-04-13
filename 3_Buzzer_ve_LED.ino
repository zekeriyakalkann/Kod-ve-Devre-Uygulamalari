const int buzzerPin = 6;
const int ledPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {

  // 1. Siren Kombinasyonu
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 700);
    delay(300);

    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
    delay(300);

    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
    delay(300);

    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
    delay(300);
  }

  delay(1000);

  // 2. Siren Kombinasyonu
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 800);
    delay(200);

    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
    delay(200);

    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1200);
    delay(200);

    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
    delay(200);
  }

  delay(1000);

  // 3. Siren Kombinasyonu
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 600);
    delay(400);

    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
    delay(400);

    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1400);
    delay(400);

    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
    delay(400);
  }

  delay(1000);
}