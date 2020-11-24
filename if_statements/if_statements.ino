 int mypin=A2,redpin=9;
 int readval,dt=250;
 float V2;
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(mypin,INPUT);
  pinMode(redpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readval=analogRead(mypin);
  V2=(5./1023.)*readval;
  Serial.print("potentiometer voltage is ");
  Serial.println(V2);
  if (V2>2.0 && V2<3.0)
  {
     digitalWrite(redpin,HIGH);
  }
  if (V2<2.0 || V2>3)
  {
     digitalWrite(redpin,LOW);          
  }
  delay(dt);
}
