// C++ code
//
void setup()
{
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  
    
    
}

void loop()
  
{
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11,0);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,0);
}
  
