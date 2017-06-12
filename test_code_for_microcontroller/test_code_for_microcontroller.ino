void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.write(0xFE);
Serial.write(0x01);
Serial.print("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0; i<32; i++) {
  Serial.write(0xFE);
  Serial.write(0x18);
  delay(150);
}
for (int i=0; i<32; i++) {
  Serial.write(0xFE);
  Serial.write(0x1C);
  delay(150);
}
}
