#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>

ESP8266WebServer server;

int led_pin = 2;

const String ssid = "INTERNET";
const String pass = "ASDF@123";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Connecting...");
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid,pass);

  while(WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");  
    delay(500);
  }

  Serial.println();
  Serial.print("IP ADDRESS");
  Serial.println(WiFi.localIP());
 

  //HOME PAGE
  //192.168.0.105 = "/"
  server.on("/",[](){
    //website code
  server.send(200,"text/plain",
    "Hello world!");
    });

  //DATA PAGE
  server.on("/data",[](){
    //website code
  server.send(200,"text/plain",
    "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec accumsan, sapien non eleifend pharetra, erat quam fringilla libero, a placerat mauris velit vel lacus. Aenean faucibus ligula vel viverra tincidunt. Aenean ut ligula bibendum erat ullamcorper pretium in a ipsum. Nulla sodales dui vitae accumsan porta. Sed felis odio, elementum vel iaculis id, semper non dolor. Sed in sagittis ante, eu sodales tellus. Nulla est turpis, tristique at sapien in, fermentum pharetra sapien. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec ut erat turpis. Cras sit amet risus at ligula finibus semper dictum et magna. Cras tincidunt id massa finibus fermentum. Proin mollis, leo interdum congue tincidunt, quam urna porttitor libero, vel porta elit nisi et nisl.");
    });

  //CONTROL PAGE
  server.on("/control",toggleLED);
  server.begin();
}

void toggleLED()
{
  digitalWrite(led_pin,!digitalRead(led_pin)); 
  server.send(204,"");
  Serial.println("Contorlling!");
}

void loop() {
  // put your main code here, to run repeatedly:
  server.handleClient();
}
