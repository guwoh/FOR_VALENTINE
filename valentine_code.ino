#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
// let eat chocolat alone
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET    -1 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  display.display();
  delay(2000); // Pause for 2 seconds
  display.clearDisplay();
  hiep();
}

void loop() {

}

void hiep()
{
  // hi!!!
  display.clearDisplay();
  display.setTextSize(1);      // Normal 1:1 pixel scale  size from 1 to 8
  display.setTextColor(SSD1306_WHITE); // Draw white text
  display.setCursor(0,0);      // Start at top-left corner  (x,y)
  display.println(F("hi!!!"));
  display.display();
  delay(1500); // Pause for 1,5 seconds


  // it's valentine
  display.setTextSize(1);      // Normal 1:1 pixel scale  size from 1 to 8
  display.setTextColor(SSD1306_WHITE); // Draw white text
  display.setCursor(0,10);      // Start at top-left corner
  display.println(F("it's valentine..."));
  display.display();
  delay(1500); // Pause for 1,5 seconds
  // display.clearDisplay();
  // display.display();

  //let’s eat chocolate alone
  display.setTextSize(1);      // Normal 1:1 pixel scale  size from 1 to 8
  display.setTextColor(SSD1306_WHITE); // Draw white text
  display.setCursor(0,20);      // Start at top-left corner
  display.println(F("let's eat chocolate \nalone"));
  display.display();
  delay(2000); // Pause for 2 seconds
  display.clearDisplay();
  display.display();

  //ALONE!!! 
  display.setTextSize(3);      // Normal 1:1 pixel scale  size from 1 to 8
  display.setTextColor(SSD1306_WHITE); // Draw white text
  display.setCursor(19,5);      // Start at top-left corner
  display.println(F("ALONE"));
  display.display();

  display.setTextSize(3);      // Normal 1:1 pixel scale  size from 1 to 8
  display.setTextColor(SSD1306_WHITE); // Draw white text
  display.setCursor(40,30);      // Start at top-left corner
  display.println(F("!!!"));
  display.display();
  delay(1500); // Pause for 1,5 seconds

  display.clearDisplay();
  display.display();


}