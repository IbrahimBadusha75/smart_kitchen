# smart_kitchen
This Smart Kitchen Safety System is designed to detect gas leakage and take immediate action to ensure safety. The system uses an MQ5 gas sensor to detect gas levels and performs the following actions if a gas leak is detected
#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int gasSensorPin = A0;
const int buzzerPin = 6;
const int ledPin = 7;
const int exhaustFanPin = 8;

void setup() {
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);

  pinMode(gasSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(exhaustFanPin, OUTPUT);

  lcd.begin();
  lcd.backlight();

  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  digitalWrite(exhaustFanPin, LOW);

  Serial.begin(9600);
}

void loop() {
  int gasLevel = analogRead(gasSensorPin);
  float voltage = gasLevel * (5.0 / 1023.0);
  int gasConcentration = map(gasLevel, 0, 1023, 0, 100);

  lcd.setCursor(0, 0);
  lcd.print("Gas Level:");
  lcd.setCursor(0, 1);
  lcd.print(gasConcentration);

  if (gasConcentration > threshold) {
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    digitalWrite(exhaustFanPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
  } else {
    servo1.write(0);
    servo2.write(0);
    servo3.write(0);
    digitalWrite(exhaustFanPin, LOW);
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}
