#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>

ESP8266WebServer server;

int relay1 = 2;
int relay2 = 4;

int relay_state1 = 0;
int relay_state2 = 0;

const String ssid = "INTERNET";
const String pass = "ASDF@123";

//webpage hosted on the server
char webpage[] PROGMEM = R"=====(
<html>
<head>
</head>
<body>
      Realy 1
      <div>
        <button id="btn" type="button" onclick="myFunction()">ON</button>
      </div>
      Realy 2
      <div>
        <button id="btn2" type="button" onclick="myFunction2()">ON</button>
      </div>
</body>
<script>

function myFunction()
{
  var xhr = new XMLHttpRequest();
  var url = "/relay1";
  
  xhr.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("btn").innerHTML = this.responseText;
    }
  };
  
  xhr.open("GET", url, true);
  xhr.send();
  
};


function myFunction2()
{
  var xhr = new XMLHttpRequest();
  var url = "/relay2";
  
  xhr.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("btn2").innerHTML = this.responseText;
    }
  };
  
  xhr.open("GET", url, true);
  xhr.send();
  
};

</script>
</html>
)=====";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Connecting to Hotspot");

  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid,pass);

  while(WiFi.status() != WL_CONNECTED)
  {
     delay(500); 
     Serial.println(".");
  }

  Serial.println("Wifi connected!");
  Serial.print("IP ADDRESS : ");
  Serial.print(WiFi.localIP());
  delay(100);

  server.on("/",[](){server.send_P(200,"text/html", webpage);});
  server.on("/relay1",getLEDState);
  server.on("/relay2",getLEDState2);
  server.begin();
}

void loop() {
  server.handleClient();
}

void toggleLED()
{
  relay_state1 = !relay_state1;
  digitalWrite(relay1,relay_state1);
}

void toggleLED2()
{
  relay_state2 = !relay_state2;
  digitalWrite(relay2,relay_state2);
}

void getLEDState()
{
  toggleLED();
  String state = relay_state1 ? "ON" : "OFF";
  server.send(200,"text/plain", state); 
  Serial.println("1 st realy"+relay_state1);
}

void getLEDState2()
{
  
  toggleLED2();
  String state = relay_state2 ? "ON" : "OFF";
  server.send(200,"text/plain", state);
  Serial.println("2nd realy"+relay_state2);
}
