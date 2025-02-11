//Temel LDR Okuma Kodu 
const int ldrPin = A0; // LDR A0 pinine bağlı

void setup() {
    Serial.begin(9600); // Seri haberleşmeyi başlat
}

void loop() {
    int ldrValue = analogRead(ldrPin); // LDR’den okunan değeri al (0-1023)
    
    Serial.print("LDR Degeri: ");
    Serial.println(ldrValue); // Seri monitöre yazdır

    delay(500); // 500ms bekleme süresi
}
//analogRead(A0), 0-1023 aralığında bir değer döndürür:
//Karanlıkta → Yüksek direnç → Düşük değer (0’a yakın)
//Işıkta → Düşük direnç → Yüksek değer (1023’e yakın) 
//LDR ile LED Kontrolü 
const int ldrPin = A0;   // LDR A0 pinine bağlı
const int ledPin = 9;    // LED 9 numaralı pine bağlı
const int threshold = 500; // LED’in yanacağı ışık eşiği

void setup() {
    pinMode(ledPin, OUTPUT); // LED çıkış olarak ayarlandı
    Serial.begin(9600);      // Seri haberleşme başlatıldı
}

void loop() {
    int ldrValue = analogRead(ldrPin); // LDR’den okunan değeri al
    
    Serial.print("LDR Degeri: ");
    Serial.println(ldrValue);

    if (ldrValue < threshold) {  // Eğer ortam karanlıksa (değer düşükse)
        digitalWrite(ledPin, HIGH); // LED'i yak
    } else {
        digitalWrite(ledPin, LOW);  // Ortam aydınlıksa LED'i söndür
    }

    delay(100); // Küçük bir bekleme süresi
}
