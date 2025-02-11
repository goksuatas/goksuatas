int i=0;

//özel ardino isimlerini de kullanamayız.
void setup() {
Serial.begin(9600);
do{
  Serial.println("robo90.com ankara");
  i++;
}
while(i<10);

}

void loop() {

}
