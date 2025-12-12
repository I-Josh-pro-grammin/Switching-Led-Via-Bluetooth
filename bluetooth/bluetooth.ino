#include <SoftwareSerial.h>
SoftwareSerial bluetooth(10, 11); // RX, TX
const int ledPin = 9;

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
bluetooth.begin(38400);
}

void loop() {


 if (bluetooth.available()) {
  char command = bluetooth.read();
  if (command == '1') {
    digitalWrite(ledPin, !digitalRead(ledPin)); // Toggle LED
    Serial.println("Its on");
  }

}

}
