# Mobility management

We chose a vehicle chassis that was open and that would allow us to have both an Arduino board, a protoboard and a power source connected, which is why it was necessary to create two floors because otherwise the car would be very long and would exceed the measurements provided. We made two floors with simple Lego structures and made some small adaptations to place our DC motor, place our battery and 3D printed our own piece to be able to mount the pixy camera.  

We chose a 6V DC motor, which is one of the most common, but seeing that it did not have enough power, we worked with the “large gear-small gear” principle (to increase the speed of the output the driver gear is larger than the driven gear which is small), which is what you will see in the diagram of the gear box and our propulsion, then with that engine, we simply place gears at the end of it, to double what is the angular speed and the linear speed that is generated on what are our rear wheels. That generates a little instability if we do it with a single gear, therefore we place two gears on each side, not to generate more power, but to generate more stability. We are working with two 5000 mA batteries that are commercially known as “powerbanks” precisely because they give a stable current through a USB cable that will not bend or break and will allow us to constantly power our vehicle. 

For the direction, we had to use a servomotor, it would have been ideal to place another 6V DC motor for this function, however, we would have had to work a lot with the voltage variations to have to make the change between forward and backward, that would require an additional integrated chip which would congest too much work for us on a physical level, therefore we placed a servomotor to work directly with the code which would allow us 90 degree rotations to the right and to the left and This is attached directly to a simple connection shaft and is what gives us mobility to the left and right of our vehicle. 


# Build

In this directory you will find what our robot is made of: all the lego pieces, arduino/electrical components, and materials used in the final robot.

What is Terreneitor made of? Terreneitor is made essentially of:
- Pieces and lego parts from diverse lego sets we found in our robotics laboratory
- While also using electrical components and arduino components
- And our own parts and materials like personalized 3D printed models, silicone, tape and zip ties

In the chart below titled "THE LEGO PIECES OUR ROBOT USES ARE:", you will find:
1) First, the amount of that especific piece we used on the robot
2) Second, the color of that lego piece
3) Third, the code of that lego piece

|THE LEGO PIECES OUR ROBOT USES ARE:|                             
|-----------------------------|
|6x Yellow 4265c|
|10x Gray 3713|
|33x Black 2780|
|1x Red 6538c|
|1x Gray 60483|
|2x White x346| 
|2x Red 44809|
|2x Black 32270|
|1x Blue 32523|
|1x Gray 32523|
|4x Gray 32073|
|1x Black 33299|
|4x Gray 32140|
|1x Gray 44294|
|2x Black 3707|
|2x Gray 48989|
|4x Dark gray 3648|
|4x White 40490|
|5x Gray 40490|
|6x Gray 64179|
|4x Grey 56908|
|4x Black 41897|

You can see all of the lego pieces we used, for a better comprehension, more clearly and neatly in this diagram:

(this diagram is made by us using the official lego _BrickLink_ app)

<img src="Lego pieces.PNG" width="800">

In the chart below titled "THE ARDUINO/ELECTRICAL COMPONENTS OUR ROBOT USES ARE:", you will find:
1) First, the amount of that especific piece we used on the robot
2) Second, the name of that arduino or electrical piece/component

|THE ARDUINO/ELECTRICAL COMPONENTS OUR ROBOT USES ARE:|Photo of each:|                                                  
|-----------------------------------------------------|--------------|
|1x MicroServo 9g (SG90)|<img src="MicroServo 9g (SG90).jpeg" width="200">|
|1x Yellow 9V Geared Dc Motor| <img src="Yellow 9V dc motor.jpg" width="200">|
|1x Gray 6V Dc Motor| <img src="Gray 5V dc motor.jpg" width="200">|
|1x Pixycam 2.1|<img src="PixyCam 2.1.jpeg" width="200">|
|2x Ultrasonic sensors|<img src="ultrasonic sensor.png" width="200">|
|A lot of Arduino cables| <img src="Arduino cables.jpg" width="200">|
|2x Bateries|<img src="Batteries.jpg" width="200">  |
|1x Arduino Uno Rev3 Board|<img src="Arduino Uno Rev3 Board.jpg.jpg" width="200">|
|1x Protoboard MB-102 830 pins|<img src="Protoboard.jpg" width="200">|

Apart from lego pieces and arduino/electrical components, we also used our materials, components and pieces like:

- our own 3D printed models (which you can find in the `models` folder)
- our own adhesive materials to join things or make them stronger like:
  - silicone
  - blue/black tape
  - zip ties

|THE MATERIALS OUR ROBOT USES ARE:|Photo of each:|                                                  
|-----------------------------------------------------|--------------|
|3D printed models|<img src="https://github.com/TNT-JEFFERSON/TERRENEITOR/blob/c9e13c2aa0a8e80e8ffdd8f5e4cbbee9d7e87a04/%F0%9F%96%A8%EF%B8%8F%20Models/Photo%20of%20the%20adapter%202.png" width="200"><img src="https://github.com/TNT-JEFFERSON/TERRENEITOR/blob/4a3f4b0863ad067fb2bd6ca101b112886b94527b/%F0%9F%96%A8%EF%B8%8F%20Models/Photo%20of%20blue%20piece%201.jpeg" width="200">|
|silicone| <img src="silicone.jpg" width="200">|
|black/blue tape| <img src="black tape.jpg" width="200"> <img src="blue tape.png.jpg" width="200">|
|zip ties|<img src="zip ties.jpg" width="200">|



## Note:

- Mostly eveything we just mentioned is part of our final robot, but for the previous attempts and prototypes we used the same or almost the same materials, pieces, parts and components.

