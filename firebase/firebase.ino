//Include Firebase ESP8266 library for firebase support
#include "FirebaseESP8266.h"

#include <ESP8266WiFi.h>

//for parsing json data
#include <ArduinoJson.h>

//Enter the realtime database link here
#define FIREBASE_HOST "**"
//Enter the webAPI key from setttings here
#define FIREBASE_AUTH "**"

//firebaseData object(this contatins the table from realtime database)
FirebaseData firebaseData;

void setup() {
    // put your setup code here, to run once:
  Serial.begin(115200); //initialise serial monitor to send data to Arduino
  WiFi.begin("INTERNET", "ASDF@123"); //connect to the network specified above
  while (WiFi.status() != WL_CONNECTED) { //Wait till Wi-Fi is connected
    delay(500);
    Serial.println(".");
  }
  Serial.println("Connected!");
  // put your setup code here, to run once:
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available())
    {
      String incoming = Serial.readString();
      Serial.println(incoming);
      insertData(incoming);
    }

    Serial.println(fetchStringData());
    
    delay(1000);
    
}

//To fetch data from firebase, User2 should be your patners user name
String fetchStringData()
{
   if (Firebase.getString(firebaseData,"/User2/chat"))
     {
        if(firebaseData.stringData())
        {
          return firebaseData.stringData();
        }
        else
        {
          return "No Text!";
        }
     }
     else
     {
      Serial.println(firebaseData.errorReason());
     }
}

//To send data to firebase, User1 should be where you send the data
  void insertData(String value)
  {
    if (Firebase.set(firebaseData, "/User1/chat", value))
    {
      return;
    }
    else
    {
      Serial.println(firebaseData.errorReason());
    }
  }
