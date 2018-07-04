void setup() {
  // put your setup code here, to run once:
pinMode(3,INPUT);
pinMode(5,OUTPUT);
pinMode(7,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
boolean state=digitalRead(3);
//digitalWrite(5,state);
boolean state2=digitalRead(7);
Serial.println(state);
//digitalWrite(13,state2);
if (state==true)
{
state2=false;
}
else
{state2=true;}
digitalWrite(5,state);
digitalWrite(13,state2);
}
