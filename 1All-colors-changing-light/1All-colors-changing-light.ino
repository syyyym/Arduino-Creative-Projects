// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

int redValue;
int greenValue;
int blueValue;

void loop()
{
  #define delayTime 10

  redValue = 255;
  greenValue = 0;
  blueValue = 0;

  // fades out red bring green full
  for (int i = 0; i < 255; i += 1)
  {
    redValue -= 1;
    greenValue += 1;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  delay(300);

  redValue = 0;
  greenValue = 255;
  blueValue = 0;

  // fade out green bring blue full
  for (int i = 0; i < 255; i += 1)
  {
    greenValue -= 1;
    blueValue += 1;

    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }

  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  delay(300);

  redValue = 0;
  greenValue = 0;
  blueValue = 255;

  // fade out blue bring red full
  for (int i = 0; i < 255; i += 1)
  {
    blueValue -= 1;
    redValue += 1;

    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(delayTime);
  }

  digitalWrite(BLUE, LOW);
  digitalWrite(RED, LOW);
  delay(300);
}