#include <Servo.h> //Include libary to control servo motor functions
#include<Pixy2.h> //Include libary to control and unite pixy2 and pixymon
  
Servo servo; // Create a Servo object to control the servo motor  
Pixy2 pixy; // Create a Pixy2 object to interact with the Pixy2 camera  
  
int Servopin = 3; // Pin number for the servo motor  
int color; // Variable to store the detected color  
int go(37.9);// Variable to have the angle that makes the robot go forward
int right(65);//Variable to have the angle that makes the robot go right
int left(13);//variable to have the angle that makes the robot to go left
byte motorDC = 5; // Pin number for the DC motor  




void setup() //function to declare variables
{  
  pinMode(5, OUTPUT); // Set pin 5 as an output for the DC motor  
  servo.attach(Servopin); // Attach the servo motor to the specified pin  
  Serial.begin(115200); // Initialize the serial communication at 115200 baud rate  
  pixy.init(); // Initialize the Pixy2 camera  
  pixy.setLamp(1, 1); // Set the Pixy2 camera's lamp to mode 1 (likely for color detection)
   
}  
  
void loop() //function to create a loop
{  
  servo.write(go); // Set the servo motor to a position of 39 degrees, which in our robot means going straight forward
  int i; // Variable for loop counter   
  pixy.ccc.getBlocks(); // Get the blocks (objects with color) detected by the Pixy2 camera  
  analogWrite(motorDC, 255); // Set the DC motor speed to maximum (255)  
  
  if (pixy.ccc.numBlocks) // Check if any blocks (objects) were detected 
  {  
    //for (i=0; pixy.ccc.numBlocks; i++) // Loop through each detected block  
      // Code to process each block (object) detected by the Pixy2 camera  
    //{ 
      Serial.println(pixy.ccc.numBlocks);// it tells you how many colors it sees 
      servo.write(go); // Set the servo motor to a position of 39 degrees, which in our robot means going straight forward
      color=pixy.ccc.blocks[i].m_signature;//Its saves on a variable the asignatures
      
       if (color==1) //If color(variable) is equal to signature #1 (which are the lines in color orange around the track)
      {
        Serial.println("NARANJA ");//prints when the pixy detects orange
      
        servo.write(right); // Set the servo motor to a position of 65 degrees, which in our robot means turning right
        delay(1900); //Wait for 800 milliseconds (0.8 seconds) 
        servo.write(go); // Set the servo motor to a position of 39 degrees, which in our robot means going straight forward
        delay(1000);//delay one second
      }

      else if (color==2) //If color (variable) is equal to signature #2 (which are the lines in color blue around the track)
      {
        Serial.println("AZUL ");//prints when the pixy detects blue
        servo.write(left); // Set the servo motor to a position of 13 degrees, which in our robot means turning left
        delay(1900);//Wait for 800 milliseconds (0.8 seconds) 
        servo.write(go); // Set the servo motor to a position of 39 degrees, which in our robot means going straight forward
        delay(1000);//delay one second
      }
       if (color==4) //If color(variable) is equal to signature #4 (which are the obstacles in color red around the track)
      {
        Serial.println("rojo ");//prints when the pixy detects red
      
        servo.write(right); // Set the servo motor to a position of 65 degrees, which in our robot means turning right
        delay(1900); //Wait for 800 milliseconds (0.8 seconds) 
        servo.write(go); // Set the servo motor to a position of 39 degrees, which in our robot means going straight forward
        delay(1000);//delay one second
      }

      else if (color==3) //If color (variable) is equal to signature #3 (which are the obstacles in color green around the track)
      {
        Serial.println("verde ");//prints when the pixy detects green
        servo.write(left); // Set the servo motor to a position of 13 degrees, which in our robot means turning left
        delay(1900);//Wait for 800 milliseconds (0.8 seconds) 
        servo.write(go); // Set the servo motor to a position of 39 degrees, which in our robot means going straight forward
        delay(1000);//delay one second
      }
      

    //}  
  }  
  
  Serial.println("NADA ");//Print when the pixy doesnt detect nothing 
  servo.write(go); // Set the servo motor to a position of 39 degrees, which in our robot means going straight forward
}  
