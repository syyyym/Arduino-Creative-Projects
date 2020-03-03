const int switchPin = 8;
unsigned long previousTime = 0;

int switchState = 0;
int prevSwitchState = 0;

int led = 2; //starting led
long interval = 5000; //interval time for leds

int buzzerPin = 9;
int note = 294;
int note1 = 330;

void setup()
{ 
  for(int x=2; x<8; x++){
    pinMode(x,OUTPUT);
  }
  
  pinMode(switchPin,INPUT);
  pinMode(buzzerPin, OUTPUT);
} 

void loop() 
{
  unsigned long currentTime = millis();

  if (currentTime - previousTime > interval)
  {
    previousTime = currentTime;
    digitalWrite(led, HIGH);
    if (led == 7)
    {
      tone(buzzerPin, note);
      delay(1);
      tone(buzzerPin, note1);
    }
    led++;
  }

  switchState = digitalRead(switchPin);

  if (switchState != prevSwitchState)
  {
    for (int x = 2; x < 8; x++) {
      digitalWrite(x, LOW);
    }
    led = 2;
    noTone(buzzerPin);
    previousTime = currentTime;
  }
  prevSwitchState = switchState;
}