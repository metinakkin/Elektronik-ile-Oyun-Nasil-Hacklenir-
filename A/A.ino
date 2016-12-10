#include<Servo.h>

Servo sg90;
int pos=0;
const int escpin = 0;
int val;   

void setup()
{
sg90.attach(3);
// pinMode(potpin, INPUT); 
 sg90.write(0);
    delay(300);
    sg90.write(90);
    delay(2250);

}

void loop()
{
  
  
    delay(2108);
    sg90.write(0);
    delay(300);
    sg90.write(90);
    delay(2108);
}
