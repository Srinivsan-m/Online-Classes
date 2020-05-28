const int ledPins[] = {2,3,4,5};
const int buttonPins[] = {6,7,8,9};
const int buzzer = 10;
void setup() {
  // put your setup code here, to run once:
  int i;
  for(int i = 0; i < 4; i++)
  {
  pinMode(ledPins[i],OUTPUT);
  pinMode(buttonPins[i],INPUT);
  }
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 4 ; i++)
  {
        digitalWrite(ledPins[i],digitalRead(buttonPins[0]));
        if(digitalRead(buttonPins[i]))
        {
          tone(buzzer,1000,200); 
        }
  }
}
