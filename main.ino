int db[200][4];
int measuredHeight;
float measuredWeight;
char gender;

void setup(){
  Serial.begin(9600);
  // Data Entry start
  db[137][0] = 285, db[137][1] = 349, db[137][2] = 285, db[137][3] = 349;
  db[138][0] = 285, db[138][1] = 349, db[138][2] = 285, db[138][3] = 349;
 
  
  
  
  
  
  
  
  // Data entry stop
  
}

void loop()
{
  
  /* DEBUG AREA
    printDB(db, 137, 139) ;
  
  */
  

  

  printResult(db, 137, 85.8, 'm');
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
 
