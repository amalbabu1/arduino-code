#include <SoftwareSerial.h>
SoftwareSerial BTserial(10, 11); // RX | TX
int x,y,se=25;
void setup() {
    Serial.begin(9600);
    BTserial.begin(9600);

}

void loop() {
   x=analogRead(A0);
   Serial.print("x=");
   Serial.print(x);
   Serial.print("                ");
   y=analogRead(A1);
   Serial.print("y=");
   Serial.println(y);
if(x>400 && x<420){
 Serial.print("food"); 
 se=0; 
 }
if(x>270 && x<295){
 Serial.print("water");  
 se=1;
  }
if(x>390 && x<395 && y>310 && y<325){
 Serial.print("emergency");
 se=2;  
  }
 if(x>260 && x<270 && y>330 && y<340){
Serial.print("medicine"); 
se=3; 
}
BTserial.print(se);
delay(1000); 
 
} 
