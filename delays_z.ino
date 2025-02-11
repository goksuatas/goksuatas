// LED pin tanımı
const int ledPin = 13;  // Genellikle Arduino'nun 13 numaralı pini LED için kullanılır

// Zaman değişkenleri
unsigned long previousMillis = 0;  // Son yanma zamanını tutar
const long interval = 1000;  // LED'in yanıp sönme aralığı (1000 ms = 1 saniye)

void setup() {
  pinMode(ledPin, OUTPUT);  // LED pini çıkış olarak ayarla
  Serial.begin(9600);  // Seri haberleşmeyi başlat
}

void loop() {
  unsigned long currentMillis = millis();  // Şu anki zaman (milisaniye cinsinden)

  // Zaman farkını kontrol et
  if (currentMillis - previousMillis >= interval) {
    // Yeterli zaman geçtiyse, LED'in durumunu değiştir
    previousMillis = currentMillis;  // Son zamanlamayı güncelle

    // LED'in durumunu değiştir
    int ledState = digitalRead(ledPin);
    if (ledState == LOW) {
      digitalWrite(ledPin, HIGH);  // LED'i yak
    } else {
      digitalWrite(ledPin, LOW);   // LED'i söndür
    }

    // Seri monitörde geçen süreyi yazdır
    Serial.print("Zaman: ");
    Serial.print(currentMillis / 1000);  // Geçen süreyi saniye cinsinden yazdır
    Serial.println(" saniye");
  }

  // Diğer işlemler burada yapılabilir
  // Örneğin, başka sensör okumaları veya işlemler yapılabilir
}
