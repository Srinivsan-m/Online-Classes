#include<ESP8266WiFi.h>

const String ssid = "NodeMCU hotspot";
const String pass = "12345678";

void setup() {
  // put your setup code here, to run once:
  delay(1000);
  Serial.begin(115200);
  Serial.println("Configuring acess point....");

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid,pass);

  Serial.println(WiFi.softAPIP());
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(WiFi.softAPIP());
  delay(1000);
}
