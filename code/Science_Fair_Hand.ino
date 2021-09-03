 
 #include <Servo.h>

Servo thumbServo;
Servo indexServo;
Servo middleServo;
Servo ringServo;
Servo pinkieServo;

const int thumbPin = 0;
const int indexPin = 1;
const int middlePin = 2;
const int ringPin = 3;
const int pinkiePin = 4;

int thumbVal;
int indexVal;
int middleVal;
int ringVal;
int pinkieVal;

void setup() {
  thumbServo. attach(2);
  indexServo.attach(3);
  middleServo.attach(4);
  ringServo.attach(5);
  pinkieServo.attach(6);
  
  Serial.begin(9600);
}
void loop() {
  thumbVal = analogRead(thumbPin);
  thumbVal = map(thumbVal, 285, 475, 0, 179);
  thumbServo.write(thumbVal);
  delay(15);
  
  indexVal = analogRead(indexPin);
  indexVal = map(indexVal, 225, 485, 65, 179);
  indexServo.write(indexVal);
  delay(15);
  
  middleVal = analogRead(middlePin);
  middleVal = map(middleVal, 265, 525, 45, 179);
  middleServo.write(middleVal);
  delay(15);
  
  ringVal = analogRead(ringPin);
  ringVal = map(ringVal, 520, 275, 110, 0);
  ringServo.write(ringVal);
  delay(15);
    
  pinkieVal = analogRead(pinkiePin);
  pinkieVal = map(pinkieVal, 225, 415, 179, 0);
  pinkieServo.write(pinkieVal);
  delay(15);
}
