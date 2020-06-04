#include "ESP8266WiFi.h"

const String ssid = "INTERNET";
const String pass = "ASDF@123";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.print("Connecting to");
  Serial.println(ssid);
  Serial.println("");

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid,pass);

  while(WiFi.status() != WL_CONNECTED)
  {
    delay(500);  
    Serial.print(".");
  }

  Serial.println("Connected!");
  Serial.println(WiFi.localIP());
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
