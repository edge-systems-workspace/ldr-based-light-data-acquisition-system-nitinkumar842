#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Nitin Kumar
 * @date 2026-02-18
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */


// TODO 1:
#define LDR_PIN A0

// TODO 2:
int ldrValue = 0;

void setup() {

    // TODO 3:
    Serial.begin(9600);

    // TODO 4:
    Serial.println("LDR Light Detection System Initialized");
}

void loop() {

    // TODO 5:
    ldrValue = analogRead(LDR_PIN);

    // TODO 6:
    Serial.print("Raw ADC Value: ");
    Serial.println(ldrValue);

    // Convert to percentage (optional but useful)
    int lightPercent = map(ldrValue, 0, 1023, 0, 100);

    Serial.print("Light Percentage: ");
    Serial.print(lightPercent);
    Serial.println("%");

    // TODO 7: Apply threshold logic
    // (Lower value = Bright, Higher value = Dark in most LDR circuits)
    if (ldrValue < 400) {

        // TODO 8:
        Serial.println("Status: BRIGHT");
    }
    else {
        Serial.println("Status: DARK");
    }

    Serial.println("------------------------");

    // TODO 9:
    delay(500);
}
