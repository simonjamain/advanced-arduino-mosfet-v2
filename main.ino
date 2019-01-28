#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>





#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


#include "Mosfetv2wifiserver.hpp"


void setup() {
  Serial.begin(115200);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  //Mosfetv2wifiserver::begin();
}

// the loop function runs over and over again forever
void loop() {
  //Mosfetv2wifiserver::handleClient();
}
