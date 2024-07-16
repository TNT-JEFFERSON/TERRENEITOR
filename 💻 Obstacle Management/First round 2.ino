#include <Servo.h> //Include libary to control servo motor functions
#include<Pixy2.h> //Include libary to control and unite pixy2 and pixymon
  
Servo servo; // Create a Servo object to control the servo motor  
Pixy2 pixy; // Create a Pixy2 object to interact with the Pixy2 camera  

int IN1 = 2;			// IN1 de L298N a pin digital 2
int IN2 = 3;			// IN2 de L298N a pin digital 3
int ENA = 5;			// ENA de L298N a pin digital 5
int VELOCIDAD=255;			// variable para almacenar valor de velocidad
int VELOCIDAD2=254;			// variable para almacenar valor de velocidad

int Servopin = 9; // Pin number for the servo motor  
int color; // Variable to store the detected color  
int go(37);// Variable to have the angle that makes the robot go forward
int left(9.2);//wVariable to have the angle that makes the robot go right 70
int right(58.19);//variable to have the angle that makes the robot to go left 10
int salto=0;


void setup() //function to declare variables
{  
  pinMode(5, OUTPUT); // Set pin 5 as an output for the DC motor  
  servo.attach(Servopin); // Attach the servo motor to the specified pin  
  Serial.begin(115200); // Initialize the serial communication at 115200 baud rate  
  pixy.init(); // Initialize the Pixy2 camera  
  pixy.setLamp(1, 1); // Set the Pixy2 camera's lamp to mode 1 (likely for color detection)
  pinMode(IN1, OUTPUT);		// pin 2 como salida
  pinMode(IN2, OUTPUT);		// pin 3 como salida	
  pinMode(ENA, OUTPUT);		// pin 5 como salida
  servo.write(0);
}  
  
void delay  (){
  delay(3000);
}
void loop() //function to create a loop
{
 
if(salto==0){// con la variable salto prendo los motores y calibro hacia el frente solo la primera vez que paso por aca 
  delay(2000);
  servo.write(37);
  delay(1000);
  analogWrite(ENA, VELOCIDAD);				// el valor de velocidad y aplica a ENA
  digitalWrite(IN1, LOW);				// IN1 en 0
  digitalWrite(IN2, HIGH);				// IN2 en 1
  salto= salto+1;
}
  
  
  int i; // Variable for loop counter   
  pixy.ccc.getBlocks(); // Get the blocks (objects with color) detected by the Pixy2 camera  
 
  
  if (pixy.ccc.numBlocks) // Check if any blocks (objects) were detected 
  {  
    
      Serial.println(pixy.ccc.numBlocks);// it tells you how many colors it sees 
      servo.write(go); // Set the servo motor to a position of 39 degrees, which in our robot means going straight forward
      color=pixy.ccc.blocks[i].m_signature;//Its saves on a variable the asignatures
       if (color==1) //If color(variable) is equal to signature #1 (which are the lines in color orange around the track)
      {
        Serial.println("NARANJA ");//prints when the pixy detects orange
      
        analogWrite(ENA, VELOCIDAD2);				// el valor de velocidad y aplica a ENA
        servo.write(right);
        delay(1630); //Wait for 800 milliseconds (0.8 seconds) 
        servo.write(go); // Set the servo motor to a position of 39 degrees, which in our robot means going straight forward
        delay(500);//delay one second
      }

      else if (color==2) //If color (variable) is equal to signature #2 (which are the lines in color blue around the track)
      {
        
        Serial.println("AZUL ");//prints when the pixy detects blue
        analogWrite(ENA, VELOCIDAD2);
        servo.write(left); // Set the servo motor to a position of 13 degrees, which in our robot means turning left
        delay(1650);//Wait for 800 milliseconds (0.8 seconds) 
        servo.write(go); // Set the servo motor to a position of 39 degrees, which in our robot means going straight forward
        delay(500);//delay one second
      }
  }
  Serial.println("NADA ");//Print when the pixy doesnt detect nothing 
  analogWrite(ENA, VELOCIDAD);
  servo.write(go); // Set the servo motor to a position of 39 degrees, which in our robot means going straight forward

} 





