#include<ESP8266WiFi.h>

String contact[100];
int a = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("Starting scan");

  int n = WiFi.scanNetworks();

  Serial.println("Scan completed!");
  for(int i = 0; i < n; i++)
  {
      Serial.println("-------------------");
      Serial.print(i+1);
      Serial.print(WiFi.SSID(i));
      Serial.print(" : ");
      Serial.print(WiFi.RSSI(i));
      Serial.println();
      if(WiFi.RSSI(i) >= -70)
      {
        //linear serach contact[i]
         contact[a] = WiFi.SSID(i);
         a++;
      }
  }

   for(int i = 0; i < a; i++)
  {
    
    Serial.println(contact[i]);
    contact[i] = "";
  }
  a = 0;

  delay(5000);
  
  
}
