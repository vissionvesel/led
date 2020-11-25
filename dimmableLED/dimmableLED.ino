int potpin=A1;
int gpin=6;
int potVal;
float LEDVal;

void setup() {
  // put your setup code here, to run once:
  pinMode (potpin,INPUT);
  pinMode(gpin,OUTPUT);
  Serial.begin (9600);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potpin);
  LEDVal=(255./1023.)*potVal;
  analogWrite(gpin,LEDVal);
  Serial.println (LEDVal);

}
