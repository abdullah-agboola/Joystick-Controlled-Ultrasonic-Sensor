#include <Servo.h>

int servoPin = 7;
Servo servo;
int currentAngle = 90;
int targetAngle = 90;

int xPin = A0;         
int yPin = A1;
int swPin = 8;

int greenLED = 10;
int redLED = 11;
int buzzer = 9;

int trigPin = 6;
int echoPin = 5;
float duration_us, distance_cm;

void setup() {
  Serial.begin(9600);

  servo.attach(servoPin);
  pinMode(swPin, INPUT_PULLUP);
  servo.write(currentAngle);

  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  int xValue = analogRead(xPin); 
  int yValue = analogRead(yPin);
  targetAngle = map(xValue, 0, 1023, 0, 180); 

  if (currentAngle < targetAngle) {
    currentAngle++;
  } else if (currentAngle > targetAngle) {
    currentAngle--;
  }

  servo.write(currentAngle); 
  delay(10); 

  
  if (digitalRead(swPin) == LOW) {
    currentAngle = 90;
    targetAngle = 90;
    servo.write(currentAngle);
    delay(300); 
  }

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration_us = pulseIn(echoPin, HIGH);
  distance_cm = 0.017 * duration_us;

  if(distance_cm <= 20){
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED,LOW);
    digitalWrite(buzzer, HIGH);
  }

  else if(distance_cm > 20){
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED,HIGH);
    digitalWrite(buzzer, LOW);
  }

  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.print("cm");
  Serial.print(" | X: ");
  Serial.print(xValue);
  Serial.print(" | Y: ");
  Serial.print(yValue);
  Serial.print(" | Target: ");
  Serial.print(targetAngle);
  Serial.print(" | Current: ");
  Serial.print(currentAngle);
  Serial.print(" | Switch: ");
  Serial.println(digitalRead(swPin));
}
