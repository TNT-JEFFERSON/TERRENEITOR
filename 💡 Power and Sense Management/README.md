# Power and sense management

In this directory we will talk about:

- the power source for the vehicle
- the sensors required to provide the vehicle with information to negotiate the different challenges
- reasons for selecting various sensors and how they are being used on the vehicle together 
- wiring diagram that includes all aspects of professional wiring diagrams
- Bill Of Materials (BOM)

Terreneitor has two power sources: The first one being a 5000 mA powerbank which provides power to the Arduino Rev3 Board, which is the main controller of our robot. The second one are four rechargable batteries of around 2300-1300 mA each and 1.2V that give power to the dc motor and are connected directly to the protoboard (were it becomes part of our circuit). In order, to turn the batteries (basically the robot) on and off, it counts with a switch (a power controller board) to do this.

These power sources for the vehicle, give power to whole robot, but some really important components that it gives power to are the sensors. Our robot counts with three sensors, two ultrasonic ones and one pixycam 2.1. The ultrasonic sensors help us detect the distance between the robot and the walls and/or obstacles, these two sensors are in the front of our robot. The pixycam 2.1 helps up detect colors in the surroundings of the robot, it helps detect the red or/and green obstacles in the second challenge, the magenta parking lot, the black walls, and the orange and blue lines in the track. 

We chose to have ultrasonic sensors in our robot because since they detect the distance between the robot and the walls/obstacles it helps us know how far or how close the robot is to these things. These is important because if the robot is close to the walls, for example, it turns (you can see these better explained in our code and in the `obstacle management` folder). If our robot didn't had any ultrasonic sensors it would 100% crash with the walls or obstacles in its way and wouldn't complete the challenges correctly. On the other hand, we chose to have a pixycam in the front of the robot, to the detect the colors of the things around the robot, this is also extremely helpful and important because, for example, in the rules of the WRO 2024 competition its established that if the robot sees a red obstacle it has to turn right, if we didn't had the pixycam we wouldn't be able to know the color of the obstacles in the track and would fail the challenge.

As you can see, the sensors are a very important part in the robot and eventhough they consumed a lot of power (because we have three of them) it is super worth it. 

Of course, for pracmatiqueness and better efficiency, the sensors and the power sources are not connected directly to the our main controller, the Arduino Rev3 Board, instead, they are connected to a circuit which then connects to the board. For you to know what our circuit looks like and how it works we made a wiring diagram that includes all aspects of professional wiring diagrams, for a better comprehension:

<img src="Wiring diagram.png" width="6000000">


<img src="BOM (Bill Of Materials).png" width="6000000">
