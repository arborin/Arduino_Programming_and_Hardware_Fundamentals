void setup() {
  Serial.begin(9600);
  String name = "hello arduino";

  // Serial.println(name.charAt(7));
 Serial.setTimeout(200);
}

void loop() {
  String command = "";

  while(command.equals("")){
    command = Serial.readString();
  }

  Serial.println(command.toInt() * 2);
}
