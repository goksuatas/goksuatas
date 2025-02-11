const int potPin = A0;  // Potansiyometre veya sensör A0 pinine bağlı
const int ledPin = 9;   // LED 9 numaralı pine bağlı (PWM destekli olmalı)

void setup() {
    pinMode(ledPin, OUTPUT);  // LED çıkış olarak ayarlandı
    Serial.begin(9600);       // Seri haberleşme başlatıldı
}

void loop() {
    int sensorValue = analogRead(potPin);  // Potansiyometre değerini oku (0-1023)
    
    int ledBrightness = map(sensorValue, 0, 1023, 0, 255);  // 0-255 arasına ölçekle
    
    analogWrite(ledPin, ledBrightness);  // LED parlaklığını değiştir

    Serial.print("Sensor Degeri: ");
    Serial.println(sensorValue);  // Seri port üzerinden değeri yazdır

    delay(100);  // Küçük bir bekleme süresi ekleyelim
}
//analogRead(A0): A0 pininden gelen analog değeri okur (0-1023 arası).
map(sensorValue, 0, 1023, 0, 255): Okunan değeri LED'in parlaklık aralığına (0-255) dönüştürür.
analogWrite(ledPin, ledBrightness): LED'in parlaklığını PWM ile kontrol eder.
Serial.println(sensorValue): Değerleri seri monitörde görmek için yazdırır.
