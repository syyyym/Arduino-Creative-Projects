int notes[] = {262, 294, 330, 349};

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int keyVal = analogRead(A0);

  Serial.println(keyVal);
} 
