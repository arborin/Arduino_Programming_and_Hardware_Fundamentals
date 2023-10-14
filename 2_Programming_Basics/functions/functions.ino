int i = 0;
int e;


void setup() {
  Serial.begin(9600);
}

void loop() {
  e = isEven(i);

  Serial.print(i);

  if(e == 0){
    Serial.println(" - Luwi");
  }else{
    Serial.println(" - Kenti");
  }

  i++;

  delay(1000);
}


int isEven(int i){
  return i % 2;
}
