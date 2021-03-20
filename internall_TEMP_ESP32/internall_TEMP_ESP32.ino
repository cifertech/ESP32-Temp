#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display = Adafruit_SSD1306(128, 32, &Wire);


#ifdef __cplusplus
extern "C" {
#endif
uint8_t temprature_sens_read();
#ifdef __cplusplus
}
#endif
uint8_t temprature_sens_read();

void setup() {
  Serial.begin(115200);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.display();
}

void loop() {
  Serial.print("Temperature: ");
  
  // Convert raw temperature in F to Celsius degrees
  Serial.print((temprature_sens_read() - 32) / 1.8);
  Serial.println(" C");

  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(25,10);
  display.print((temprature_sens_read() - 32) / 1.8 );
  display.println(" C");
  display.display();

  
  delay(1000);
}
