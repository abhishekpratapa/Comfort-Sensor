(NOTE: Looking for a job. I'd want to do this every day.)

# Comfort-Sensor

## Introduction

I've been having a bunch of headaches lately and I didn't know what the cause of those headaches was. Secondarily, during these migraines, I would notice that my mouth felt extremely parched. Initially I had thought that the cause for these symptoms was that I wasn't drinking enough water. This, however, was not the case. I was drinking more than enough of my share of water and I was still feeling horrible. I needed to do something.

I finally arrived on the conclusion that the environment around me was partially causing these symptoms. I decided to build a sensor that told me the humidity and temperature readings in my environment; it would sort of be like a comfort indicator to determine whether these headaches were caused by my surroundings.

## Prototyping

### Planning the User Experience

User Experience is most important when designing a device like this one. What do we want the user to see? Based off of the limited number of components I had available to me I opted for an analog approach in displaying the temperature and the humidity. It would sort of be like a clock. The User Experience is illustrated below.

`TODO: Add user-experience slides`

### List of Components

I began rummaging through my electronics and I managed to find a few components that I thought would be ideal to make such a device. They are listed below:

#### Components in the Prototype

- Neo Pixel Ring
- Teensy 3.1
- Battery Management Unit
- Switch
- DHT22 Humidity and Temperature Sensor

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/Neo_pixels.jpg?raw=true "Neo Pixels")
Neo Pixel Ring

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/Teensy.jpg?raw=true "Teensy 3.1")
Teensy 3.1

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/Battery_management.jpg?raw=true "Battery Management Unit")
Battery Management Unit

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/Power_switch.jpg?raw=true "Power Switch")
Switch

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/DHT22_sensor.jpg?raw=true "DHT22 Humidity and Temperature Sensor")
DHT22 Humidity and Temperature Sensor

#### Tools used to build the Prototype

- Flush Cutters
- Soldering Iron

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/Flush_cutters.jpg?raw=true "Power Switch")
Flush Cutters

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/Soldering_iron.jpg?raw=true "Power Switch")
Soldering Iron

### Planing the wiring Diagram

Below is a figure of the wiring diagram I created. It is fairly simple.

`TODO: Upload a wiring diagram`

### Wiring up the Prototype

I ended up wiring the device up before I tested it, I had run out of breadboards, and generally this is a horrible idea; however, this was not my first rodeo. I felt confident that I knew what I was doing. Everything worked out without any hiccups.

`TODO: Upload a picture of the finished device`

### Writing the software

The code design is shown below in the diagram.

`TODO: Show the functional Diagram`

Translating the design to code was a fairly straight forward process. Keeping things simple in Embedded systems design means that space on the micro controller is preserved and that everything is running efficiently. 

`TODO: Show the method break down`

### Finalizing 

Here is a video of the prototype of the device

[![IMAGE ALT TEXT](http://img.youtube.com/vi/CA7ydEnhpj4/0.jpg)]
(http://www.youtube.com/watch?v=CA7ydEnhpj4 "Prototype Video")
