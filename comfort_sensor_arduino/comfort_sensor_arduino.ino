/*
 * Dependencies
 * 
 * Libraries:
 * 
 *      Name                    Author
 *      ________________________________
 *      Adafruit_NeoPixel       Adafruit
 *      DHTSensor               Adafruit
 */
#include "DHT.h"
#include <Adafruit_NeoPixel.h>

// definition for if an ATTiny is used
#ifdef __AVR__
  #include <avr/power.h>
#endif

// definition for the Neo_pixels
#define PIN            6
#define NUMPIXELS      12

// definition for the humidity and temperature sensor
#define DHTTYPE DHT22
#define DHTPIN 5

// set up an object for the neo_pixels
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// set up an object for the temperature and humidity sensor
DHT dht(DHTPIN, DHTTYPE);

// color enumerated values
enum color {
  red,
  green,
  blue
};

// color values for both the humidity reading and the temperature readings
color humidity_color = blue;
color temp_color = red;

// store the ones and tens digits of both the humidity and temperature readings respectively
int sensor_data[4];

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
void setup() {
  
  // definition for an ATTiny
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif

  // start the objects
  dht.begin();
  pixels.begin();
}

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
void loop() {
  read_sensors(&sensor_data[0]);

  for(int c=0; c<4; c++){
    display_correct(sensor_data[c], (((int)(c/2)) == 0)? humidity_color:temp_color);
    clear_previous();
  }
}

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
void display_correct(int value, color sent_color){
  for(int x=0;x<150;x++){
    for(int i=0;i<NUMPIXELS;i++){
      if(i < value){
        pixels.setPixelColor(i, pixels.Color(((sent_color == red)?x:0),((sent_color == green)?x:0),((sent_color == blue)?x:0)));
      }else{
        pixels.setPixelColor(i, pixels.Color(0,0,0));
      }
    }
    pixels.show();
    delay(10);
  }
}

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

void clear_previous(){
  for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
  }
    
  pixels.show();
  delay(200); 
}

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

void read_sensors(int *data_retrieved){
  
  float h = dht.readHumidity();
  float f = dht.readTemperature(true);
  
  data_retrieved[0] = (int)(h/10.0);
  data_retrieved[1] = (((int)(h))%10);
  data_retrieved[2] = (int)(f/10.0);
  data_retrieved[3] = (((int)(f))%10);
  
}

