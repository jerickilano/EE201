void setup() {
  // put your setup code here, to run once:
  pinmode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9600);
  if (digitalRead(13) == 1); ) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }

}
