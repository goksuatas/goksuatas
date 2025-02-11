int a=54;
int b=3;
int c;
//özel ardino isimlerini de kullanamayız.
void setup() {
Serial.begin(9600);
Serial.println(a);
Serial.println(b);
c=a/b;
Serial.println("c:"); Serial.println(c);





}

void loop() {

}
