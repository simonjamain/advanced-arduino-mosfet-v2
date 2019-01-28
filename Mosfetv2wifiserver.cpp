#include "Mosfetv2wifiserver.hpp"

#define APPIP 192, 168, 0, 1

//TODO: penser à tout gzipper

const char *ssid = "AAM V2";
const char *password = "zazaza";

ESP8266WebServer Mosfetv2wifiserver::server(80);
IPAddress Mosfetv2wifiserver::ip(APPIP);

void Mosfetv2wifiserver::begin()
{
    delay(1000);
    Serial.println();
    Serial.print("Configuring access point...");
    /* You can remove the password parameter if you want the AP to be open. */
    WiFi.mode(WIFI_AP);
    WiFi.softAPConfig(Mosfetv2wifiserver::ip, Mosfetv2wifiserver::ip, IPAddress(255, 255, 255, 0));   // subnet FF FF FF 00
    WiFi.softAP(ssid, password);

    Serial.print("AP IP address: ");
    Serial.println(Mosfetv2wifiserver::ip);
    Mosfetv2wifiserver::server.on("/", Mosfetv2wifiserver::handleRoot);
    Mosfetv2wifiserver::server.begin();
    Serial.println("HTTP server started");
}


void Mosfetv2wifiserver::handleRoot() {
  Mosfetv2wifiserver::server.send(200, "text/html", "<h1>You are connected</h1>");
}

void Mosfetv2wifiserver::handleClient() {
  Mosfetv2wifiserver::server.handleClient();
}