int a=5;
int b=7;
int sonuc=0;

void setup() {
Serial.begin(9600);
sonuc=hesapla(a,b);//hesapla fonksiyonunu sonuc olarak cagırdık ve atadık
Serial.println(sonuc);
ekranaYaz(sonuc);//ekrana yaz fonksiyonunu cagırdık;
sonuc2=hepsiniTopla();
Serial.println(sonuc2);
}




void loop() {

}
int hesapla(int x,int y){ //hesapla fonksiyonunu tanımladık
  return (x+y)/2+5;
}
void ekranaYaz(int z){
  Serial.println(sonuc);
}
int hepsiniTopla(){
  return a+b;
}
