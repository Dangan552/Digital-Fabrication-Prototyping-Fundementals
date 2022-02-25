#include <Servo.h>

Servo sv1, sv2; // set 2 servos
bool pb1 = HIGH; // set push button default state as HIGH

void setup() {
  pinMode(11, INPUT_PULLUP); //set push button to pin 11 as pullup
  sv1.attach(9); //set motor 1 to pin 9
  sv2.attach(10); // set motor 2 to pin 10
  sv1.write(90); // set servo to stop
  sv2.write(90);
}

void loop() {
  pb1 = digitalRead(11); // pb1 reads value of push button

  if (pb1 == LOW){ // when push button is pressed...
    sv1.write(180);
    delay(250); // delay 1s to have alternate shuffle
    sv2.write(0);
    // motors rotate in opposite directions.
  }
  else{ // when push button is not pressed
    sv1.write(90); // set servo to stop
    sv2.write(90);
  }
}
