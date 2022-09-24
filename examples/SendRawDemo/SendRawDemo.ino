/*
  Example for different sending methods
  
  https://github.com/sui77/rc-switch/
  
*/

#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

unsigned int data[]   = {1,312,392,312,400,312,392,312,392,320,392,312,392,320,392,312,388,316,4936,308,756,332,388,684,412,316,756,684,408,320,752,340,388,332,388,684,412,316,412,308,412,316,404,316,412,312,408,312,764,684,764,332,388,340,380,340,380,692,756,340,380,688,416,304,412,316,756,684,764,340,388,328,392,680,768,680,768,680,412,316,756,684,412,312,416,304,768,680,768,328,388,340,380,340,380,684,764,684,764,328,392,680,764,332,388,684,412,316,756,684,412,312,756,324,2876,0};

void setup() {

  Serial.begin(9600);
  
  // Transmitter is connected to Arduino Pin #10  
  mySwitch.enableTransmit(10);
    
  // Optional set number of transmission repetitions.
  mySwitch.setRepeatTransmit(1);
}

void loop() {

  Serial.println("Sending");

  mySwitch.send(data);

  delay(2000);
}
