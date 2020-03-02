int lightPin = 0;
int latchPin = 11;
int clockPin = 9;
int dataPin = 12;

byte leds = 0; //pattern of the 7 leds

void updateShiftRegister()
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, leds); //LSB - least significant bit
  digitalWrite(latchPin, HIGH);
}

void setup()
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop()
{
  int reading = analogRead(lightPin);
  int numLEDSLit = reading / 57; //all leds lit at 1k
  if (numLEDSLit > 8)
    numLEDSLit = 8;
  
  leds = 0;
  for (int i = 0; i < numLEDSLit; i++)
  {
    leds = leds + (1 << i); // sets the i'th bit
  }
  updateShiftRegister();
}