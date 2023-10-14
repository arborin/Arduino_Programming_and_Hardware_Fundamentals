// int i = 0;
// int e;

// int my_array[10] = {1,2,3,4};

char my_name[] = "nikoooo";

void setup() {
  Serial.begin(9600);
}

void loop() {
  // e = isEven(i);

  // Serial.print(i);

  // if(e == 0){
  //   Serial.println(" - Luwi");
  // }else{
  //   Serial.println(" - Kenti");
  // }

  // i++;

  for(int index = 0; index < 8; index++){
    if(my_name[index]=='\0'){
      break;
    }
    Serial.print(my_name[index]);
  }

Serial.println();
  Serial.println("-----------------------");

  delay(1000);
} 


// int isEven(int i){
//   return i % 2;
// }
