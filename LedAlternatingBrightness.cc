int brilho = 0;

void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for (brilho = 0; brilho <= 255; brilho += 5) {
    analogWrite(9, brilho);
    delay(30); 
  }
  for (brilho = 255; brilho >= 0; brilho -= 5) {
    analogWrite(9, brilho);
    delay(30);
  }
}