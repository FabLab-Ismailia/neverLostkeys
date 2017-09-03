/* Never losting Keys */
#include <SoftwareSerial.h>
SoftwareSerial keys (2,3 ) ; 
byte speaker = 4 ; 
byte led = 5 ; 
//String reading ; 
void setup() {
   pinMode (speaker,OUTPUT) ;
   pinMode (led,OUTPUT) ;
   keys.begin(9600);
}

void loop() {
  
int reading = keys.read();  
if (reading ==  '1' )
{
digitalWrite(led,HIGH);  
tone (speaker,700,1000); 
delay(1000);
}
else if (reading ==  '0' ) 
{
noTone(speaker);  
digitalWrite(led,LOW);
}
}

