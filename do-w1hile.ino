int i=0;

//özel ardino isimlerini de kullanamayız.
void setup() {
Serial.begin(9600);
while(i<10){
Serial.println("robo90.com ankara");
//burda döngü sonsuza girer bunu önlemek için
//i yi bir arttırırız.
i=i+1;

}


}

void loop() {

}
