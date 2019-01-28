#ifndef MOSFETV2WIFISERVER_H
#define MOSFETV2WIFISERVER_H

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

class Mosfetv2wifiserver
{
    public:
        static void begin();
        static void handleClient();
    private:
        static void handleRoot();
        static ESP8266WebServer server;
        static IPAddress ip;
};

#endif