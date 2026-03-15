const int ledPin = 7;
const int buttonPin = 6;

bool ledState = false;      // LED'in durumu
bool lastButtonState = LOW; // Butonun önceki durumu

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {

  bool buttonState = digitalRead(buttonPin);

  // Butona yeni basılmış mı kontrolü
  if (buttonState == HIGH && lastButtonState == LOW) {
    
    ledState = !ledState;        // LED durumunu tersine çevir
    digitalWrite(ledPin, ledState);

    delay(50); // debounce için küçük gecikme
  }

  lastButtonState = buttonState;
}