# ESP32-Temp
We intend to measure temperature using this chip. Without any external module just using the chip itself, ESP32 chip internal temperature sensor.

## What it DO!
The ESP32-S2 has a temperature sensor. The temperature sensor module includes an 8-bit Sigma Delta ADC and a temperature compensating DAC. You can see the conversion relationships in the first column of the table below. Among them, the offset option = 0 is the main measurement option and the other values of the measurement options are wide.


### Items needed
-ESP32
-Oled0.96


### Required libraries
-Wire
-SPI
-Adafruit_SSD1306

## Conclusion
In this project, using the NodeMCU board with the ESP32 chip and also the OLED display with the SS1306 driver, we were able to test and use one of the other features of the ESP32 chip. In this project, we could only measure the temperature using the ESP32 chip itself. And show. The presence of an internal temperature sensor in many chips helps us measure both the internal temperature and the ambient temperature. In this case, there is no need to use a separate sensor to measure general values.


 Full Tutorial at http://cifertech.net/
