#include <SoftwareSerial.h>
SoftwareSerial bluetooth(10, 11); // RX, TX
// const int ledPin = 9;

void setup() {
// pinMode(ledPin, OUTPUT);
Serial.begin(9600);
bluetooth.begin(9600);
}

void loop() {

  if(bluetooth.available()) {
  Serial.println(bluetooth.readString());
 }

 if(Serial.available()) {
  bluetooth.write(Serial.read());
 }

// if (bluetooth.available()) {
// char command = bluetooth.read();
// Serial.println(command);
// if (command == '1') {
// digitalWrite(ledPin, !digitalRead(ledPin));
//   }
//  }

}
