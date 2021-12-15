// Print Database function
void printDB(int db[200][ 4 ] ) {
   for ( int i = 137; i < 139; ++i ) {
     for ( int j = 0; j < 4; ++j ){
      Serial.print ((float)db[ i ][ j ]/10 );
      Serial.print (" ") ;
     }
	 Serial.println();
   }
}

int db[200][4];

void setup(){
  Serial.begin(9600);
  // Data Entry start
  db[137][0] = 285, db[137][1] = 349, db[137][2] = 285, db[137][3] = 349;
  db[138][0] = 286, db[138][1] = 364, db[138][2] = 288, db[138][3] = 360;
 
  
  
  // Data entry stop
  
}

void loop()
{
	printDB(db) ;
	delay(1000);
}
 