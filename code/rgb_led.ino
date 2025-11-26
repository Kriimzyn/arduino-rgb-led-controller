// Arduino RGB LED Controller
// Cycles three LEDs (Red, Green, Blue) using digital output pins

// Pin definitions
int redLED = 13;
int greenLED = 12;
int blueLED = 11;

void setup() {
    // Set LED pins as outputs
    pinMode(redLED, OUTPUT);
    pinMode(greenLED, OUTPUT);
    pinMode(blueLED, OUTPUT);
}

void loop() {
    // --- RED LED ---
    digitalWrite(redLED, HIGH);
    delay(1000);
    digitalWrite(redLED, LOW);
    delay(1000);

    // --- GREEN LED ---
    digitalWrite(greenLED, HIGH);
    delay(1000);
    digitalWrite(greenLED, LOW);
    delay(1000);

    // --- BLUE LED ---
    digitalWrite(blueLED, HIGH);
    delay(1000);
    digitalWrite(blueLED, LOW);
    delay(1000);
}
