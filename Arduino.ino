int pwmValue;
int percentage;

void setup()
{
  pinMode(5, OUTPUT);

  Serial.begin(9600);

  analogWrite(5, 0);

  Serial.println("PWM LED CONTROL");
  Serial.println("Enter PWM percentage:");
  Serial.println("0, 25, 50, 75 or 100");
}

void loop()
{
  if (Serial.available() > 0)
  {
    percentage = Serial.parseInt();

    if (percentage == 0 ||
        percentage == 25 ||
        percentage == 50 ||
        percentage == 75 ||
        percentage == 100)
    {
      // Convert percentage to PWM value
      pwmValue = (percentage * 255) / 100;

      analogWrite(5, pwmValue);

      Serial.print("PWM = ");
      Serial.print(percentage);
      Serial.println("%");

      Serial.print("PWM Value = ");
      Serial.println(pwmValue);

      Serial.println("LED will stay at this level.");
      Serial.println("Enter next level:");
    }
    else
    {
      Serial.println("Invalid!");
      Serial.println("Enter only 0, 25, 50, 75 or 100.");
    }

    // Clear remaining Serial data
    while (Serial.available())
    {
      Serial.read();
    }
  }
}
