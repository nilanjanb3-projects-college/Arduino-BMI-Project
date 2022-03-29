// Function to print result
void printResult(int db[][4], int height, float weight, int gender){
  // Code Begin
// Printing user height
  Serial.print("Your height is :");
  Serial.print(height);
  Serial.println(" cms");
// Printing user weight
  Serial.print("Your weight is :");
  Serial.print(weight);
  Serial.println(" kgs");
      
  if(height < 137){
    Serial.println("OOPS !!! height lesser than 137 cm can't be processed");
  }
  else if(height > 195){
    Serial.println("OOPS !!! height greater than 195 cm can't be processed");
  }
  else{ // Entry point for height within range
    float lower_bound, upper_bound; // lower_bound & upper_bound nothing but lowest & highest allowable weight for a perticular height
    if(gender == 1){ // Entry point for females
      lower_bound = (float)db[height-H][0]/10;
      upper_bound = (float)db[height-H][1]/10;
      if(weight >= lower_bound && weight <= upper_bound){ // when weight is in control
        Serial.println("Yehhh!!! Your weight is under control");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }
      else if(weight < lower_bound){ // under weight
        Serial.println("OOPS!!! Your are under weight");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }
      else{ //  over weight
        Serial.println("OOPS!!! Your are over weight");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }

      // Calculating BMI

      BMI = ((weight/height)/height)*10000;
      Serial.print("Your Accurate BMI is :");
      Serial.println(BMI);
      

      
    }
    else{ // Entry point for males
      lower_bound = (float)db[height-H][2]/10;
      upper_bound = (float)db[height-H][3]/10;
      if(weight >= lower_bound && weight <= upper_bound){  // when weight is in control
        Serial.println("Yehhh!!! Your weight is under control");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }
      else if(weight < lower_bound){ // under weight
        Serial.println("OOPS!!! Your are under weight");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }
      else{ // over weight
        Serial.println("OOPS!!! Your are over weight");
        Serial.print("Your exact weight should be in range between ");
        Serial.print(lower_bound);
        Serial.print(" kgs to ");
        Serial.print(upper_bound);
        Serial.println(" kgs");
      }
      // Calculating BMI

      BMI = ((weight/height)/height)*10000;
      Serial.print("Your Accurate BMI is :");
      Serial.println(BMI);
    }
  }
  
  
  // Code End
}
