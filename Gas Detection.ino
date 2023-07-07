int greenLed = 11;
int buzzer = 10;
int smokeA0 = A0;
// Threshold value
int sensorThres = 500;

void setup() {
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  delay(1000);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(greenLed, LOW);
   
  }
  else
  {
    digitalWrite(buzzer, LOW);
    digitalWrite(greenLed, HIGH);
    
  }
  delay(100);
}