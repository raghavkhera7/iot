/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
  pinMode(13, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
 
  
   digitalWrite(1,HIGH);
  delay(10);
  digitalWrite(1,LOW);
  delay(20); 
  digitalWrite(4,HIGH);
  delay(10);
  digitalWrite(4,LOW);
  delay(20);
  digitalWrite(2,HIGH);
  delay(10);
  digitalWrite(2,LOW);
  delay(20);
  digitalWrite(5,HIGH);
  delay(10);
  digitalWrite(5,LOW);
  delay(20);
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(3,LOW);
  delay(20);
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(20);
  digitalWrite(6,HIGH);
  delay(10);
  digitalWrite(6,LOW);
  delay(20);// wait for a second
}

