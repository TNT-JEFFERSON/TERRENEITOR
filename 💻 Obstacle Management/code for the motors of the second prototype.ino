void setup(){
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  
}

void loop()
{

  delay(2000);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW); //adelante
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  delay(14000);

  
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW); //giro
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  delay(9000);

  digitalWrite(9,HIGH);
  digitalWrite(10,LOW); //adelante
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  delay(14000);
    digitalWrite(9,HIGH);
  digitalWrite(10,LOW); //giro
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);

  delay(7000);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);  //adelante
  digitalWrite(7,LOW);
  delay(4000);

  digitalWrite(9,HIGH);
  digitalWrite(10,LOW); //giro
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);

  delay(9000);
    digitalWrite(9,HIGH);
  digitalWrite(10,LOW); //adelante
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  delay(7000);
  


}




