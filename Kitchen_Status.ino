// ESP8266 Web Server
//-------------------------------------
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
ESP8266WebServer server(80);
// Provide network details
//-------------------------------------
const char* ssid     = "Network_SSID";
const char* password = "Network_Password";
//-------------------------------------
// Web Server
void handleRoot()
{
  String val = String("Value: ") + String(analogRead(0)) + "\n";
  if(analogRead(0) > 500)
  {
    val = "<html><head><meta http-equiv=\"refresh\" content=\"2\"><body bgcolor=\"#eb6a6a\"><h1 style=\"font-size: 72px; text-align: center;\"><br><br><br><br><br>Kitchen\'s not available</h1></body></html>";
  } else if(analogRead(0) < 500)
  {
    val = "<html><head><meta http-equiv=\"refresh\" content=\"2\"><body bgcolor=\"#a4eb6a\"><h1 style=\"font-size: 72px; text-align: center;\"><br><br><br><br><br>Kitchen\'s available</h1></body></html>";
  }
  server.send(200, "text/html", val);
}
//------------------------------------------------------------------------
// Configurating Web Server
void setup()
{
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.print("\n\r \n\rWorking to connect");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("ESP8266 Webpage");
  Serial.println("Connected to WiFi");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.begin();
  Serial.println("HTTP server started");
}
//======================================================================
void loop()
{
  server.handleClient();
}
