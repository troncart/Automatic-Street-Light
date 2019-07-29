/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
***********Automatic Street Light System**************
***********24-7-2019**************
*/
 #include<SoftwareSerial.h>
int sensorPin=A0; // LDR value
int sensorValue = 0;
int led = 3; // Connect it to LED

void setup()
{
 pinMode(led, OUTPUT);
 Serial.begin(9600);
 
}

void loop()
{
 sensorValue = analogRead(sensorPin);
 Serial.println(sensorValue);
   if(sensorValue < 300)
    {
   Serial.println("LED light on");
   digitalWrite(led,HIGH);
   delay(1000);
    }
 digitalWrite(led,LOW);
 delay(sensorValue);
 
}
