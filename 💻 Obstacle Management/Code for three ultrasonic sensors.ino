int trigPin1 = 10;
int echoPin1 = 13;

int trigPin2 = 9;
int echoPin2 = 12;

int trigPin3 = 8;
int echoPin3 = 11;

void setup() {
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

  if (distance1 < 30) {  // Change the number 
   
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
  
    if (distance2 < 20) {  // Change the number 
      
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
