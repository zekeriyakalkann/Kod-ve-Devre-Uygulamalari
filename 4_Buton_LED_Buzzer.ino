const int buttonPin = 5;
const int buzzerPin = 6;
const int ledPin = 7;

bool systemState = false;     
bool lastButtonState = HIGH;  

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {

  bool buttonState = digitalRead(buttonPin);

  // Butona yeni basıldıysa durumu değiştir
  if (buttonState == LOW && lastButtonState == HIGH) {
    
    systemState = !systemState;
    delay(50); // debounce
  }

  lastButtonState = buttonState;

  // Sistem durumu
  if (systemState) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1500);   // Düşük ses tonu
  } 
  else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }
}