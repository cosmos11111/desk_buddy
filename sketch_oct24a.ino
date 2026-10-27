#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
int quiet;
void setup() {
 display.begin(SSD1306_SWITCHCAPVCC,0x3C);
 pinMode(27, OUTPUT);
 digitalWrite(27, HIGH);
 pinMode(26, OUTPUT);
 digitalWrite(26, LOW);
 pinMode(34, INPUT);
 pinMode(25, OUTPUT);
 display.clearDisplay();
 display.fillRoundRect(20, 14, 34, 36, 8, SSD1306_WHITE);
 display.fillRoundRect(74, 14, 34, 36, 8, SSD1306_WHITE);
 
 
 
 display.display();
 delay(1000);
 quiet = digitalRead(34);
}

void loop() {
  if (digitalRead(34)!= quiet) {
    for (int k = 0; k < 3; k++) {
    digitalWrite(25, HIGH);
    delay(100);
    digitalWrite(25, LOW);
    delay(100);
    }
  }
 display.clearDisplay();
 display.fillRoundRect(20, 14, 34, 36, 8, SSD1306_WHITE);
 display.fillRoundRect(74, 14, 34, 36, 8, SSD1306_WHITE);
 display.display();
 for (int i = 0; i < 300; i++){
  if(digitalRead(34)!= quiet){
  for (int k = 0; k < 3; k++) {
    digitalWrite(25, HIGH);
    delay(100);
    digitalWrite(25, LOW);
    delay(100);
  }
  }
  delay(10);

 }
 display.clearDisplay();
display.fillRoundRect(20, 30, 34, 4, 2, SSD1306_WHITE);
display.fillRoundRect(74, 30, 34, 4, 2, SSD1306_WHITE);
display.display();
delay(150);
}
