void setup()
{
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(3,OUTPUT);
  int(i);
}
void loop()
{
  analogWrite(11,64);
  analogWrite(10,64);
  analogWrite(9,64);
  analogWrite(6,64);
  analogWrite(5,64);
  analogWrite(3,64);
  delay(500);
  analogWrite(11,159);
  analogWrite(10,159);
  analogWrite(9,159);
  analogWrite(6,159);
  analogWrite(5,159);
  analogWrite(3,159);  
  delay(500);
  analogWrite(11,255);
  analogWrite(10,255);
  analogWrite(9,255);
  analogWrite(6,255);
  analogWrite(5,255);
  analogWrite(3,255);
  delay(500);
  analogWrite(11,159);
  analogWrite(10,159);
  analogWrite(9,159);
  analogWrite(6,159);
  analogWrite(5,159);
  analogWrite(3,159);  
  delay(500);  
}
  
  
  
  
  
  
  
