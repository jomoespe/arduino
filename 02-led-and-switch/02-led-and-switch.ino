/*
 * led-and-switch
 * 
 * Switch on a led when push a button
 */

#define LED 13

void setup() {
  // Configure and turn on the LED
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
}

void loop() {
  // nothing to do
}
