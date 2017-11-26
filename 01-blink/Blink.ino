/*
 *  Blink
 *
 * Turns an LED on for one second, then off for one second, repeatedly.
 */

#define LED 13

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);         // digital pin 13 as an output.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LED, HIGH);
  delay(1000);
}

