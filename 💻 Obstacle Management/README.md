# Code

In this directory you will find all the code we used for our prototypes and the final robot.

## Software

The software we used for coding and programming our robot, Terreneitor, is _Arduino IDE _ version: 2.3.2 in MacOS

<img src="Arduino IDE 2.3.2.png" width="40000">

##  Pseudo code 

A pseudo code is Here is the pseudo code explained in detailed for each round:

### Round 1:

1) The dc motors starts and the car begins to go forward.
2) It continues going straight forward until the pixycam detects an orange or blue line in the track.
3) If the line it sees is orange, it will turn to the right.
4) If the line it sees is blue, it will turn to the left.
5) While the pixycam is working, the ultrasonic sensors in our robot are working too. These ultrasonic sensors help us know the distance between our robot and the walls in the track.
6) If the left wall is closer to the robot than the right wall, it turns to the right side, if not, then the right wall is closer to the robot than the left wall, it turns to the left side.

|Our old flowchart diagram|
|--------------------------|
|<img src="Old flowchart diagram TNT.jpeg" width="3000">|

|Our new flowchart diagram|
|-----------|
|<img src="New flowchart diagram TNT.png" width="5000">|


## Code for the motors of the second prototype:

- What this code does is simple: 

   - First, it takes 2 seconds to start the code, this is made intencionally so we had to accomodate the robot in the track            comfortably.
   - Second, the code starts and it turns both motors on, making it go in a straight line for 14 seconds
   - After the 14 seconds have passed, the robot turns to the side for 9 seconds (by turning off one motor while the other one is still on)
   - And finally, it goes in a straight line again (turning on both motors, like in the beginning).

The robot does this cicle 4 times,for it to finish that round, which is the first challenge (the open challange). This code is a way of completing the first challenge by using time.

- You can see this code being used and putted to the test in "Second prototype on the track" (in the videos folder).

## Code for the three ultrasonic sensors of the final robot:

- This code is so the three ultrasonic sensors work together in unison. The sensors perceive the distance in cm in this code.
- This code also works together with the servomotor code.

## Code for the servomotor and ultrasonic sensors of the final robot:

This code makes the direction mechanism and the three ultrasonic sensors in our robot work together

It works like this:

- If the robot detects that one side is more than 50cm it goes that way
- If the robot detects that one side is less that 50 cm it goes to the opposite way






