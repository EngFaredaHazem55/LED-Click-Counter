int led =9;
  
void setup() 
{ 
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(2000); 
  digitalWrite(9, LOW);
  delay(2000);
}