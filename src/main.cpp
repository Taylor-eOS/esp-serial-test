#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    while(!Serial);
}

void loop() {
    Serial.println("Hello from C3");
    delay(1000);
}

