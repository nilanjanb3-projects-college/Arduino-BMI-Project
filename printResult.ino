// Function to print result
void printResult(int db[200][4], int height, float weight, char gender){
  // Code Begin
  if(height < 137){
    // Pass
  }
  else if(height > 195){
    // Pass
  }
  else{ // Entry point for height within range
    float lower_bound, upper_bound;
    if(gender == 'f'){ // Entry point for females
      lower_bound = (float)db[height][0]/10;
      upper_bound = (float)db[height][1]/10;
      if(weight >= lower_bound && weight <= upper_bound){
        Serial.println("Yehhh!!! Your weight is under control");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }
      else if(weight < lower_bound){
        Serial.println("OOPS!!! Your are under weight");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }
      else{
        Serial.println("OOPS!!! Your are over weight");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }
    }
    else{ // Entry point for males
      lower_bound = (float)db[height][2]/10;
      upper_bound = (float)db[height][3]/10;
      if(weight >= lower_bound && weight <= upper_bound){
        Serial.println("Yehhh!!! Your weight is under control");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }
      else if(weight < lower_bound){
        Serial.println("OOPS!!! Your are under weight");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }
      else{
        Serial.println("OOPS!!! Your are over weight");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }
    }
  }
  
  
  // Code End
}
