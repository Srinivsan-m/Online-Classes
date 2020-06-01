void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    char words = Serial.read();
    if(words == 'o')
    {
      digitalWrite(13,HIGH);  
    } 
    else if(words == 'f')
    {
      digitalWrite(13,LOW);  
    } 
  }
}
