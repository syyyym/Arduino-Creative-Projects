int notes[] = {262, 294, 330, 349};

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int keyVal = analogRead(A0);

  Serial.println(keyVal);

  if (keyVal == 1023) {
    tone(8, notes[0]);
  }
  else if (keyVal >= 990 && keyVal <= 1010) {
    tone(8, notes[1]);
  }
  else if (keyVal >= 505 && keyVal <= 525) {
    tone(8, notes[2]);
  }
  else if (keyVal >= 8 && keyVal <= 50) {
    tone(8, notes[3]);
  }
  else {
    noTone(8); //no button pressed
  }
} 
