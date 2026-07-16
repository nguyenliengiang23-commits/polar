#include<Servo.h>
 Servo hip;
 Servo knee;
 int pos =0;
void setup(){
  // put your setup code here, to run once:
  hip.attach(9);
  knee.attach(12);
}
void loop(){
  // put your main code here, to run repeatedly:
  for (pos=0;pos<=180;pos+=1)
  {hip.write(pos);
  delay(30);
  knee.write(pos);
  delay(50);}
}