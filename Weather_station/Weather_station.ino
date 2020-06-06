#include <ESP8266WiFi.h> //ESP8266 Library
#include <ESP8266HTTPClient.h> //ESP8266 Library
#include <ArduinoJson.h> //For phrasing JSON file download from https://github.com/bblanchon/ArduinoJson
 
const char* ssid = "INTERNET"; //Enter your Wi-Fi SSID
const char* password = "ASDF@123"; //Enter you Wi-Fi Password

String currentTime;
//change the offset of GMT according to your country
String payload; //To store the JSON object as string

void setup () {
 
  Serial.begin(115200); //initialise serial monitor to send data to Arduino
  WiFi.begin(ssid, password); //connect to the network specified above
  while (WiFi.status() != WL_CONNECTED) { //Wait till Wi-Fi is connected
    delay(2000);
    Serial.println(".");
  }
  Serial.println("Connected!");
}
 
void loop() {
  Serial.println("Fetching data");
 if (WiFi.status() == WL_CONNECTED) 
 { 
  //If Wi-Fi connected successfully 
  
    HTTPClient http;  //start a HTTPClinet as http 
    
    //#DO NOT USE THE SAME API-KEY as below
    http.begin("http://api.openweathermap.org/data/2.5/weather?zip=560068,in&appid=90bde76b67daff43c323c3dfba34f618");  //Enter your API 
    
    int httpCode = http.GET(); //pass a get request                                                                  
     Serial.println(httpCode);
    if (httpCode > 0) 
    {
     const size_t capacity = JSON_ARRAY_SIZE(1) + JSON_OBJECT_SIZE(1) + 2*JSON_OBJECT_SIZE(2) + JSON_OBJECT_SIZE(4) + 2*JSON_OBJECT_SIZE(6) + JSON_OBJECT_SIZE(13) + 290;
     //Creating the JSON document file
      DynamicJsonDocument doc(capacity);
      
      //Get the JSON data and store it in doc
      deserializeJson(doc,http.getString());
      
      JsonObject main = doc["main"];
      float main_temp = main["temp"]; // 282.55
      int main_pressure = main["pressure"]; // 1023
      int main_humidity = main["humidity"]; // 100

      Serial.println("temperature = "+main_temp);
      Serial.println("Pressure    = "+main_pressure);
      Serial.println("humidity    = "main_humidity);
      
 }
  http.end();   //Close http connection
     delay(60000);  //show values every 1hr.
}
}
