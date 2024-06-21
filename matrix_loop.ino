int X[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
int Y[] = {0, 9, 10, 11, 12, 13, A0, A1, A2};

void setup()
{
  for (int i = 1; i < 9; i++)
  {
    pinMode(X[i], OUTPUT);
    pinMode(Y[i], OUTPUT);
    digitalWrite(X[i], HIGH);
    digitalWrite(Y[i], LOW);
  }
}

void loop()
{
  for (int i = 1; i < 9; i++)
  {
    for (int j = 1; j < 9; j++)
    {
      LED(i, j);
      delay(100);
      effacer();
    }
  }
}

void LED(int x, int y)
{
  digitalWrite(X[x], LOW);
  digitalWrite(Y[y], HIGH);
}

void effacer()
{
  for (int i = 1; i < 9; i++)
  {
    digitalWrite(X[i], HIGH);
    digitalWrite(Y[i], LOW);
  }
}
