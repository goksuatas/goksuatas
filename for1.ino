int i=0;

//özel ardino isimlerini de kullanamayız.
void setup() {
Serial.begin(9600);
for(int i=0;i<10;i++){
  Serial.println(i);
  Serial.println("robo90.com");
  Serial.println("ankara");
}
//veya şu şekildede kullanılır
for(;i<10;){
  i++
  Serial.println(i);
  Serial.println("robo90.com");
  Serial.println("ankara");

}

}

void loop() {

}
