#include <string.h>

int ledPin = 9;    // LED connected to digital pin 9

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  
  char morse_code[] = "-- . .-. .-. -.-- / -.-. .... .-. .. ... - -- .- ...";
  execute_morse_code(morse_code);
}

void execute_morse_code(char* morse_code)
{
  int i;
  char c;
  int len = strlen(morse_code);

  for (i = 0; i < len; i++){
    c = morse_code[i];

    switch (c) 
    {
      case '.':
        led_flash();
        led_pause();
        break;
      case '-':
        led_pulse();
        led_pause();
        break;
      case ' ':
        led_short_pause();
        break;
      case '/':
        led_long_pause();
        break;
    }
  }
}

void led_flash()
{
  analogWrite(ledPin, 255);
  delay(800);
  analogWrite(ledPin, 0);
}

void led_pulse()
{
  int fadeValue;
  
  // fade in from min to max in increments of 5 points:
  for (fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
}

void led_short_pause()
{
  analogWrite(ledPin, 0);
  delay(800);
}

void led_long_pause()
{
  analogWrite(ledPin, 0);
  delay(1500);
}

void led_pause()
{
  delay(400);
}

