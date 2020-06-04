#include "ESP8266WiFi.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Start Scanning");

   int n = WiFi.scanNetworks();

   Serial.println("Found networks");
   for(int i = 0; i < n; i++)
   {
      Serial.print(i+1);
      Serial.print(":");
      Serial.print(WiFi.SSID(i));
      Serial.println("");
      Serial.print(WiFi.RSSI(i));
      Serial.println();
      Serial.println();
   }
   delay(5000);
}
