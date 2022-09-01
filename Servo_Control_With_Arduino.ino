#include <Servo.h>

const int POT_THUMB =A1;
const int POT_INDEX =A2;
const int POT_MIDDLE =A3;
const int POT_RING =A4;
const int POT_PINKY =A5;

const int SERVO_PIN_THUMB =11;
const int SERVO_PIN_INDEX =10;
const int SERVO_PIN_MIDDLE =9;
const int SERVO_PIN_RING =6;
const int SERVO_PIN_PINKY =5;

const int MAX_POT_VALUE = 1023;
const int MAX_SERVO_ANGLE =180;

int potVal_thumb;
int potVal_index;
int potVal_middle;
int potVal_ring;
int potVal_pinky;

int servoAngle_thumb;
int servoAngle_index;
int servoAngle_middle;
int servoAngle_ring;
int servoAngle_pinky;

Servo thumb;
Servo index;
Servo middle;
Servo ring;
Servo pinky;

const int refresh =50;


void setup() {
  // put your setup code here, to run once:
  thumb.attach(SERVO_PIN_THUMB);
  index.attach(SERVO_PIN_INDEX);
  middle.attach(SERVO_PIN_MIDDLE);
  ring.attach(SERVO_PIN_RING);
  pinky.attach(SERVO_PIN_PINKY);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("thumb");

  potVal_thumb = analogRead(POT_THUMB);
  servoAngle_thumb = map(potVal_thumb,0,MAX_POT_VALUE, 0 , MAX_SERVO_ANGLE);
  thumb.write(servoAngle_thumb);
  Serial.println(potVal_thumb);
  Serial.println(servoAngle_thumb);

  delay(refresh);

  
   Serial.println("index");
  potVal_index = analogRead(POT_INDEX);
  servoAngle_index = map(potVal_index,0,MAX_POT_VALUE, 0 , MAX_SERVO_ANGLE);
  index.write(servoAngle_index);
  Serial.println(potVal_index);
  Serial.println(servoAngle_index);

  delay(refresh);

   Serial.println("middle");
  potVal_middle = analogRead(POT_MIDDLE);
  servoAngle_middle = map(potVal_middle,0,MAX_POT_VALUE, 0 , MAX_SERVO_ANGLE);
  middle.write(servoAngle_middle);
  Serial.println(potVal_middle);
  Serial.println(servoAngle_middle);

  delay(refresh);

   Serial.println("ring");
  potVal_ring = analogRead(POT_RING);
  servoAngle_ring = map(potVal_ring,0,MAX_POT_VALUE, 0 , MAX_SERVO_ANGLE);
  ring.write(servoAngle_ring);
  Serial.println(potVal_ring);
  Serial.println(servoAngle_ring);

  delay(refresh);

   Serial.println("pinky");
  potVal_pinky = analogRead(POT_PINKY);
  servoAngle_pinky = map(potVal_pinky,0,MAX_POT_VALUE, 0 , MAX_SERVO_ANGLE);
  pinky.write(servoAngle_pinky);
  Serial.println(potVal_pinky);
  Serial.println(servoAngle_pinky);

  delay(refresh);

  delay(15);


  

}
