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

}