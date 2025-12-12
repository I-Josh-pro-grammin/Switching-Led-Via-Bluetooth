#include <SoftwareSerial.h>

SoftwareSerial bluetooth(10, 11);
const int buttonPin = 9;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  bluetooth.begin(38400);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) { 
  Serial.println("Button Pressed!");
  bluetooth.write('1'); 
  delay(500);
}

}