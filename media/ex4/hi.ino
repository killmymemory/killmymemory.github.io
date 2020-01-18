/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo blues; 

int degree = 0;
int rotation = 0;
void setup() {
  blues.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
 rotation = analogRead(A0);
 degree = map(rotation,0,1023,0,500);
blues.write(degree);
delay(20);

}
