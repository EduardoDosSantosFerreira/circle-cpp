#include <Adafruit_NeoPixel.h>

#define PIN 2
#define NUMLED 24
#define DELAYLOOP 10
const int lampPin = 13; // Pino onde a lâmpada está conectada

Adafruit_NeoPixel leds(NUMLED, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  leds.begin();
  pinMode(lampPin, OUTPUT); // Configura o pino da lâmpada como saída
}

void loop() {
  leds.clear();

  // Red color sweep
  for (int i = 0; i < NUMLED; i++) {
    leds.setPixelColor(i, leds.Color(150, 0, 0));
    leds.show();
    delay(DELAYLOOP);
  }

  // Turn on the lamp
  digitalWrite(lampPin, HIGH); // Ligar a lâmpada
  delay(1000);

  // Yellow color sweep
  leds.clear();
  for (int i = NUMLED - 1; i >= 0; i--) {
    leds.setPixelColor(i, leds.Color(255, 255, 0));
    leds.show();
    delay(DELAYLOOP);
  }

  // Turn off the lamp
  digitalWrite(lampPin, LOW); // Desligar a lâmpada

  // Green color sweep
  leds.clear();
  for (int i = 0; i < NUMLED; i++) {
    leds.setPixelColor(i, leds.Color(0, 250, 154));
    leds.show();
    delay(DELAYLOOP);
  }
}
