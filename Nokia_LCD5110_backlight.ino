/**
 * Just a sample to show how
 * to modify NOKIA 5110 LCD backlight
 * 
 * Also VCC and GND are needed.
 * 
 * PWM value = 0 -> backlight full
 * PWM value = 255 -> backlight is off
 */

int lightPin = 3; // Digital pin 3 to Nokia LCD pin 7

void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 255; i > 0; i-=25){
    analogWrite(3, i);
    delay(2000);
  }
}
