/*
   https://www.arduino.cc/en/Tutorial/Fade
*/

# define LED    9
# define DELAY 30

int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  // set the brightness of pin 9
  analogWrite(LED, brightness);
  // change the brightness for next time through the loop
  brightness += fadeAmount;
  // reverse the direction of the fading at the end of the fade
  if (brightness <= 0 || brightness >= 255 ) {
    fadeAmount = -fadeAmount;
  }
  // wait to see the diming effect
  delay(DELAY);
}
