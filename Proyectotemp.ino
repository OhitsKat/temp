float v;
void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
float volt; 
delay (500); 
float v; 
volt=analogRead(A0); 
v=(volt*93)/1023;
Serial.print("Temperatura es de ");
Serial.println(v); 
Serial.print(volt);

}
