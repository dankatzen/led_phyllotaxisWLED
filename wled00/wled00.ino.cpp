# 1 "C:\\Users\\katze\\AppData\\Local\\Temp\\tmpkcvst153"
#include <Arduino.h>
# 1 "C:/Users/katze/Documents/PlatformIO/Projects/led_phyllotaxisWLED/wled00/wled00.ino"
# 13 "C:/Users/katze/Documents/PlatformIO/Projects/led_phyllotaxisWLED/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "C:/Users/katze/Documents/PlatformIO/Projects/led_phyllotaxisWLED/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}