#include<SoftwareSerial.h>
SoftwareSerial mySerial(6,7); //RX, Tx
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("Enter AT Commands: ");

}

void loop() {
  // put your main code here, to run repeatedly:
if(mySerial.available())
Serial.write(mySerial.read());
if(Serial.available())
mySerial.write(Serial.read());

}
