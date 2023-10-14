 void setup() {
  randomSeed(analogRead(0));
  Serial.begin(9600);

  for(int i = 0; i < 10; i++){
    Serial.print(random(1,100));
    Serial.print(" ");
  }
  Serial.println();

}

void loop() {
  // put your main code here, to run repeatedly:

}
