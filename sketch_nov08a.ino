#include <SoftwareSerial.h>
SoftwareSerial BTserial(10, 11); // RX | TX
int x,y,se;
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
if(x>390 && x<400 && y>330 && y<340){
 Serial.print("Food"); 
 se=0; 
 }
if(x>265 && x<290 && y>335 && y<340){
 Serial.print("Water");  
 se=1;
  }
if(x>320 && x<340 && y>260 && y<270){
 Serial.print("Emergency");
 se=2;  
  }
 if(x>330 && x<340 && y>380 && y<395){
Serial.print("Medicine"); 
se=3; 
  }
BTserial.print(se);

 delay(1000); 
 
}
