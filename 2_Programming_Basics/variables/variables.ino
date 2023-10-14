int led = 13;
char b = 'G';
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);

  Serial.println(led);
  Serial.println(b);
  Serial.println(counter);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);

  // counter = counter + 1;

  // Serial.println(counter);

  // // LOOPS
  while(counter<10){
    Serial.print("COUNTER: ");
    Serial.println(counter);
    counter = counter + 1;
  }


  for(int i = 0; i < 10; i++){
    Serial.println("**********");
  }

}



/*
ARITHMETIC OPERATORS

= assignment
+ addition
- substraction


*/
