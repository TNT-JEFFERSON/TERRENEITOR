#include <Servo.h>


Servo servo;

int ServoPin = 3;

int trigPin1 = 13;
int echoPin1 = 10;

int trigPin2 = 12;
int echoPin2 = 9;

int trigPin3 = 11;
int echoPin3 = 8;



void setup() {
  servo.attach(ServoPin);

  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
 
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT); 
 
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
 
 
}

void firstsensor(){ // This function is for first sensor
  int duration1, distance1;
  digitalWrite (trigPin1, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin1, LOW);
  duration1 = pulseIn (echoPin1, HIGH);
  distance1 = (duration1/2) / 29.1;

      Serial.print("1st Sensor: ");
      Serial.print(distance1); 
      Serial.print("cm    ");

  if (distance1 > 50) {  
    delay(500);
    servo.write(155);
   delay(800);
   servo.write(90);
  } else {
    
  }   
}
void secondsensor(){ // This function is for second sensor
    int duration2, distance2;
    digitalWrite (trigPin2, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin2, LOW);
    duration2 = pulseIn (echoPin2, HIGH);
    distance2 = (duration2/2) / 29.1;
 
      Serial.print("2nd Sensor: ");
      Serial.print(distance2); 
      Serial.print("cm    ");
  
    if (distance2 > 50) {  
      delay(500);
      servo.write(0);
      delay(800);
      servo.write(90);
    }
 else {
      
    }  
 
}
void thirdsensor(){ // This function is for third sensor
    int duration3, distance3;
    digitalWrite (trigPin3, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin3, LOW);
    duration3 = pulseIn (echoPin3, HIGH);
    distance3 = (duration3/2) / 29.1;

      Serial.print("3rd Sensor: ");  
      Serial.print(distance3); 
      Serial.print("cm");
  
    if (distance3 < 10) {  // Change the number 
     
    }
 else {
      
    }  
}

void loop() {
Serial.println("\n");
firstsensor();
secondsensor();
thirdsensor();
delay(100);
}
