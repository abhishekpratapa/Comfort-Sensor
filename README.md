(NOTE: Looking for a job. I'd want to do this every day.)

# Comfort-Sensor

This is a walk through of designing and manufacturing a microcontroller based project. The goal is to design a consumer product.

## Introduction

I've been having a bunch of headaches lately and I didn't know what the cause of those headaches was. Secondarily, during these migraines, I would notice that my mouth felt extremely parched. Initially I had thought that the cause for these symptoms was that I wasn't drinking enough water. This, however, was not the case. I was drinking more than enough of my share of water and I was still feeling horrible. I needed to do something.

I finally arrived on the conclusion that the environment around me was partially causing these symptoms. I decided to build a sensor that told me the humidity and temperature readings in my environment; it would sort of be like a comfort indicator to determine whether these headaches were caused by my surroundings.

## Prototyping

### Planning the User Experience

User Experience is most important when designing a device like this one. What do we want the user to see? Based off of the limited number of components I had available to me I opted for an analog approach in displaying the temperature and the humidity. It would sort of be like a clock. PLEASE spend more time than I did on this. You need to nail this in order to retain customers or users. The User Experience is illustrated below.

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/User_Experience_Design.jpg?raw=true "Soldering Iron")
A Design Prototype

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

## PCB Design

Here is the Schematic Design for the project. (Click on it to go to the PDF of the schematic)

[![IMAGE ALT TEXT](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/schematic_comfort_sensor.png)]
(https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/Comfort_Sensor_PCB/comfort_board.pdf "PDF Schematic")

Here is the PCB design for the project.

![Alt text](https://github.com/abhishekpratapa/Comfort-Sensor/blob/master/images/PCB_layout.png?raw=true "PCB Layout")

Please take a look at the eagle CAD and schematic designs in: https://github.com/abhishekpratapa/Comfort-Sensor/tree/master/Comfort_Sensor_PCB

## Financing

### Low Volume

#### Components

| Name of Component | Quantity | Supplier | Price | Shipping | URL |
|    :---     |     :---:      |     :---:      |     :---:     | :---: | :--- |
| ATMega328  | 1 | Mouser | $3.70 | $4.70 | http://www.mouser.com/ProductDetail/Atmel/ATMEGA328P-PU/?qs=K8BHR703ZXguOQv3sKbWcg%3D%3D&gclid=CNLnypKQ488CFQEJaQodVeQNbA |
| Crystal 16MHz | 1 | Mouser | $0.36 | $-.--  | http://www.mouser.com/ProductDetail/CTS/ATS16B-E/?qs=tjlMjqRIEYTG8fmTS%252b7FfQ%3D%3D&gclid=CMWL4dOQ488CFQipaQodB0oNbg |
| DHT22  | 1 | Ebay | $3.70 | $-.-- | http://www.ebay.com/itm/New-DHT22-AM2302-Digital-Temperature-Humidity-Sensor-Replace-SHT11-SHT15-Arduino/162147611172 |
| Mini-Pushbutton | 1 | Sparkfun | $0.35 | $2.35  | https://www.sparkfun.com/products/97 |
| Neo-Pixel Ring | 1 | Adafruit | $7.50 | $4.75  | https://www.adafruit.com/products/1643?gclid=CMuP2r6R5c8CFYE2aQodMi0GSg |
| USB Mini B | 1 | Mouser | $0.76 | $1.25  | http://www.mouser.com/ProductDetail/CUI/UJ2-MBH-1-SMT/?qs=sGAEpiMZZMulM8LPOQ%252byk%252br6FietFiXBYOK8b9%2fsuNIy0pbKqeLWLA%3d%3d |
| LiPo 3.7V battery pack | 1 | Mouser | $13.68 | $4.25  | http://www.mouser.com/ProductDetail/Renata/ICP402025PC-1/?qs=WtvvTbtNXq%252bQv7inF4n3oA%3d%3d |
| JST-Connector | 1 | Mouser | $0.95 | $-.--  | https://www.sparkfun.com/products/9749 |
| 0805 LED | 1 | DigiKey | $0.50 | $4.58  | http://www.digikey.com/product-detail/en/kingbright/APT2012SECK-J3-PRV/754-1791-1-ND/4753616 |
| Surface Mount Right Angle Switch | 1 | SparkFun | $0.48 |  $-.--  | https://www.sparkfun.com/products/10860 |
| Battery Management Chip | 1 | Mouser | $0.94 |  $-.--  | http://www.mouser.com/ProductDetail/Microchip-Technology/MCP73833T-AMI-MF/?qs=Fxu3fLyJv8epbqy6GsGQQA%3D%3D |
| JST 3-pin  | 1 | SparkFun | $1.50 |  $-.--  | https://www.sparkfun.com/products/9915 |
| 10K Resistor 1206 | 2 | Mouser | $0.19 |  $-.--  | http://www.mouser.com/ProductDetail/ROHM-Semiconductor/KTR18EZPF1002/?qs=sGAEpiMZZMvdGkrng054t4QdAY%2fQ0LweN2wTdK7f9y4%3d |
| 150 Ohm Resistor 0805 | 1 | Mouser | $0.10 |  $-.--  | http://www.mouser.com/ProductDetail/ROHM-Semiconductor/ESR10EZPJ151/?qs=sGAEpiMZZMvdGkrng054t4QdAY%2fQ0Lwe25OmOs7YyvE%3d |
| 1 kOhm Resistor 0805 | 1 | Mouser | $0.15 |  $-.--  | http://www.mouser.com/ProductDetail/ROHM-Semiconductor/ESR10EZPF1001/?qs=sGAEpiMZZMvdGkrng054t4QdAY%2fQ0LwesgDXVtvvnU8%3d |
| 10 kOhm Resistor 0805 | 2 | Mouser | $0.17 |  $-.--  | http://www.mouser.com/ProductDetail/ROHM-Semiconductor/KTR10EZPF1002/?qs=sGAEpiMZZMvdGkrng054t4QdAY%2fQ0LweGk5BfWf21pU%3d |
| 150 kOhm Resistor 0805 | 1 | Mouser | $0.15 |  $-.--  | http://www.mouser.com/ProductDetail/ROHM-Semiconductor/ESR10EZPF1503/?qs=sGAEpiMZZMvdGkrng054t4QdAY%2fQ0Lwe41fW0x%2fX95k%3d |
| 22pF Capicator 1206 | 2 | Mouser | $0.10 |  $-.--  | http://www.mouser.com/ProductDetail/Vishay-Vitramon/VJ1206A220JXJCW1BC/?qs=sGAEpiMZZMs0AnBnWHyRQAR7at33PD0%252bkVtEu2CEPmo%3d |
| 10pF Capicator 1206 | 2 | Mouser | $0.10 |  $-.--  | http://www.mouser.com/ProductDetail/AVX/0805YD106KAT2A/?qs=dV90weSEKCml0j81AJ8E6Q%3D%3D |

#### PCB Cost

| Quantity | Supplier | Price | Shipping |
|    :---     |     :---:      |     :---:      |     :---:     |
| 3 | Osh Park | $23.50 | $12.50 |
| 40 | Osh Park | $188.00 | $12.50 |

#### Consumables

| Name of Consumable | Quantity | Supplier | Price | Shipping | URL |
|   :---   |    :---     |     :---:      |     :---:      |     :---:     | :--- |
| Solder Paste | 3 | Digi-Key | $23.50 | $4.89 | http://www.digikey.com/product-detail/en/SMD291AX/SMD291AX-ND/1160002 |

#### Housing Costs

#### Manufacturing Costs


