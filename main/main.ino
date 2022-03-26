// @Nilanjan NBhattacharjee's declairation for System Design
int db[60][4];
int measuredHeight;
float measuredWeight;
int gender; // value should be either 1 or 0; female = 1; male = 0;
const int H = 137;
float BMI;

// @ANG Sir's Weight Calculating method's declairation
#include <LiquidCrystal.h> 
#include "HX711.h"
LiquidCrystal lcd(12,11,5,4,3,2);  
const int DOUT = 7;
const int CLK = 8; 
HX711 scale;
float weight; 
float calibration_factor = 31000  ; // for me this value works just perfect 419640 

// @ANG Sir's Height Calculating method's declairation
#include <Wire.h>
float trigPin = 6;
float echoPin = 9;
const float a=187;
const float b=74;
float z;
long duration;
int distanceCm, distanceInch;

void setup(){
  Serial.begin(9600);
  // @Nilanjan NBhattacharjee's declairation for System Design
  // Data Entry start
//  db[0][0] = 285, db[0][1] = 349, db[0][2] = 285, db[0][3] = 349;
//  db[1][0] = 285, db[1][1] = 349, db[1][2] = 285, db[1][3] = 349;
  
  // Data entry stop
// @ANG Sir's Weight Calculating method's declairation
  scale.begin(DOUT, CLK);
  lcd.begin(16,2);
  Serial.println("HX711 calibration sketch");
  Serial.println("Remove all weight from scale");
  Serial.println("After readings begin, place known weight on scale");
  Serial.println("Press + or a to increase calibration factor");
  Serial.println("Press - or z to decrease calibration factor");
  scale.set_scale();
  scale.tare(); //Reset the scale to 0
  long zero_factor = scale.read_average(); //Get a baseline reading
  Serial.print("Zero factor: "); //This can be used to remove the need to tare the scale. Useful in permanent scale projects.
  Serial.println(zero_factor);

  // @ANG Sir's Height Calculating method's declairation
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);

  
  
}

void loop()
{
  
  /* DEBUG AREA
    printDB(db, 137, 139) ;
  
  */
  measuredHeight = getHeight();
  measuredWeight = getWeight();
  
  
//  printResult(db, measuredHeight, measuredWeight, gender);


  printResult(db, 137, 85.8, 0);
  Serial.println();
  Serial.println();
  delay(1000);
  /*
    Serial.println("Enter Height");
  while(Serial.available() == 0){}
  measuredHeight = Serial.parseInt();
  Serial.println(measuredHeight);
  
  Serial.println("Enter Weight");
  while(Serial.available() == 0){}
  measuredWeight = Serial.parseFloat();
  Serial.println(measuredWeight);
  
  Serial.println("Enter Gender");
  while(Serial.available() == 0){}
  gender = Serial.read();
  Serial.println(gender);
  */
}
 
