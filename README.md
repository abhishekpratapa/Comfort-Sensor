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
- LiPo Battery

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

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/Lipo_battery.jpg?raw=true "Battery")
LiPo Battery

#### Tools used to build the Prototype

- Flush Cutters
- Soldering Iron

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/Flush_cutters.jpg?raw=true "Flush Cutters")
Flush Cutters

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/Soldering_iron.jpg?raw=true "Soldering Iron")
Soldering Iron

### Planing the wiring Diagram

Below is a figure of the wiring diagram I created. It is fairly simple.

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/Wiring_Diagram.png?raw=true "Wiring Diagram")
Wiring Diagram

### Wiring up the Prototype

I ended up wiring the device up before I tested it, I had run out of breadboards, and generally this is a horrible idea; however, this was not my first rodeo. I felt confident that I knew what I was doing. Everything worked out without any hiccups.

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/TotalCircuit.jpg?raw=true "Prototype Switch")
Prototype Circuit

### Writing the software

The code design is shown below in the diagram.

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/Software_diagram.png?raw=true "Method Break Down")

### Method Break Down

Translating the design to code was a fairly straight forward process. Keeping things simple in Embedded systems design means that space on the micro controller is preserved and that everything is running efficiently. 

#### Setup Method
```
/*
 * Method:  setup
 * 
 * Action:  This method is the setup loop of the program, it sets up the
 *          DHT22 and the Neopixel objects
 * 
 * params:  [None]
 *          
 * return:  void
 * 
 */
```

#### Loop Method

```
/*
 * Method:  loop
 * 
 * Action:  This method is the main loop of the program, it structurally 
 *          calls the other methods to make the program cohesive
 * 
 * params:  [None]
 *          
 * return:  void
 * 
 */
```

#### Display_correct Method

```
/*
 * Method:  display_correct
 * 
 * Action:  This method takes in two parameters, displays the correct 
 *          number of Neo_pixels and the correct color for those pixels
 * 
 * params:  value       Integer value to be displayed in the neo_pixels
 *          sent_color: Enum type color, determines the color to be displayed 
 *                      on the neo_pixels
 *          
 * return:  void
 * 
 */
```

#### Clear_previous Method

```
/*
 * Method:  clear_previous
 * 
 * Action:  This method clears the Neo_pixels and sets the values of all the Neo_pixels to zero
 * 
 * params:  [None]
 * 
 * return:  void
 * 
 */
```

#### Read_sensors Method

```
/*
 * Method:  read_sensors
 * 
 * Action:  This method reads the DHT22 and places the proper data in an int pointer array
 * 
 * params:  *data_retrieved:  This is an Integer array pointer that stores the ones, and tens 
 *                            decimal places for the temperature and the humidity values.
 *                            The first two indexes are the humidity reading and the second two 
 *                            indexes are the temperature reading in [tens, ones] format.
 * 
 * return:  void
 * 
 */
```

### Finalizing 

Here is a video of the prototype of the device

[![IMAGE ALT TEXT](http://img.youtube.com/vi/CA7ydEnhpj4/0.jpg)]
(http://www.youtube.com/watch?v=CA7ydEnhpj4 "Prototype Video")

## Specing all the PCB components

| Name of Component | Supplier | Price | Shipping | URL |
|    :---:     |     :---:      |     :---:     | :---: | :---: |
| ATMega328  | Mouser | $3.70 | $4.70 | http://www.mouser.com/ProductDetail/Atmel/ATMEGA328P-PU/?qs=K8BHR703ZXguOQv3sKbWcg%3D%3D&gclid=CNLnypKQ488CFQEJaQodVeQNbA |
| Crystal 16MHz | Mouser | $0.36 | $-.--  | http://www.mouser.com/ProductDetail/CTS/ATS16B-E/?qs=tjlMjqRIEYTG8fmTS%252b7FfQ%3D%3D&gclid=CMWL4dOQ488CFQipaQodB0oNbg |
| DHT22  | Ebay | $3.70 | $0.00 | http://www.ebay.com/itm/New-DHT22-AM2302-Digital-Temperature-Humidity-Sensor-Replace-SHT11-SHT15-Arduino/162147611172?_trksid=p2141725.c100338.m3726&_trkparms=aid%3D222007%26algo%3DSIC.MBE%26ao%3D1%26asc%3D20150313114020%26meid%3D46b7678c63d741b484085e9a816a9452%26pid%3D100338%26rk%3D6%26rkt%3D30%26sd%3D221546295018 |

## PCB Design

Here is the Schematic Design for the project. (Click on it to go to the PDF of the schematic)

[![IMAGE ALT TEXT](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/schematic_comfort_sensor.png)]
(https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/Comfort_Sensor_PCB/comfort_board.pdf "PDF Schematic")

Here is the PCB design for the project.

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/PCB_layout.png?raw=true "PCB Layout")

Please take a look at the eagle CAD and schematic designs in: https://github.com/abhishekpratapa/Comfort-Sensor/tree/master/Comfort_Sensor_PCB

