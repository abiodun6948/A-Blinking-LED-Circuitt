void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int dial = analogRead(0);
  int button = digitalRead(2);

  if (button==LOW)
  {
digitalWrite(13,HIGH);
tone(9,1023-dial);
delay(dial);
digitalWrite(13,LOW);
noTone(9);
delay(dial);
  }
  else
  {
    digitalWrite(13,LOW);
    noTone(9);
  }
  
}
