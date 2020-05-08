
int button = 2;     // the number of the pushbutton pin
int led =  13;      // the number of the LED pin


void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(buttonPin); == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
