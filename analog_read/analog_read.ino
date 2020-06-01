void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightSensitivity = analogRead(A0);
  Serial.println(lightSensitivity);
  int fade = map(lightSensitivity,0,1023,0,255);
  analogWrite(3,fade);
}
