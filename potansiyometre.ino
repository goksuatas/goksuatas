//Potansiyometre ile LED Parlaklığı Ayarlama
const int potPin = A0;  // Potansiyometre A0 pinine bağlı
const int ledPin = 9;   // LED 9 numaralı PWM destekli pine bağlı

void setup() {
    pinMode(ledPin, OUTPUT);  // LED çıkış olarak ayarlandı
    Serial.begin(9600);       // Seri monitör başlatıldı
}

void loop() {
    int potValue = analogRead(potPin); // Potansiyometre değerini oku (0-1023)

    int pwmValue = map(potValue, 0, 1023, 0, 255); // 0-255 arasına dönüştür

    analogWrite(ledPin, pwmValue); // LED parlaklığını ayarla

    Serial.print("Potansiyometre Degeri: ");
    Serial.print(potValue);
    Serial.print(" - PWM Degeri: ");
    Serial.println(pwmValue);

    delay(100); // Küçük bir bekleme süresi
}
