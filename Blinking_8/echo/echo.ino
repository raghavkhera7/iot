void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,INPUT);
Serial.begin(9600);
}

void loop() {
  int duration,distance;
  // put your main code here, to run repeatedly:
digitalWrite(3,HIGH);
delay(10);
digitalWrite(3,LOW);
duration = pulseIn(4,HIGH);
distance=0.0343*(duration/2);
Serial.print("Distance: ");
Serial.println(distance);
delay(500);
}
