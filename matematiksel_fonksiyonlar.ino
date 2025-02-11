// Arduino matematiksel fonksiyonlar örneği

void setup() {
  // Seri haberleşme başlat
  Serial.begin(9600);
  
  // Kullanıcıya bilgi ver
  Serial.println("Matematiksel Fonksiyonlar - Sinüs ve Cosinüs");
}

void loop() {
  // Açı değeri (radyan cinsinden)
  float angle = 1.0; // 1.0 radian (yaklaşık 57.3 derece)

  // Sinüs ve Cosinüs hesaplamaları
  float sinValue = sin(angle);  // Sinüs değeri
  float cosValue = cos(angle);  // Cosinüs değeri

  // Sonuçları seri monitöre yazdır
  Serial.print("Sinüs(");
  Serial.print(angle);
  Serial.print(" radian) = ");
  Serial.println(sinValue);
  
  Serial.print("Cosinüs(");
  Serial.print(angle);
  Serial.print(" radian) = ");
  Serial.println(cosValue);
  
  // Biraz bekle
  delay(1000);
}
