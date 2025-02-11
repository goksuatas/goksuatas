//define: Makro tanımıdır, bellekte yer kaplamaz. Derleme öncesinde doğrudan kodun içine yerleştirilir.
//const: Değişken tanımıdır, belirli bir bellek alanında saklanır ve kod içinde kullanılabilir.


const int buttonPin = 2;  // 2 numaralı pine bağlı butonu temsil eder

void setup() {
    pinMode(LED_PIN, OUTPUT);  // LED pini çıkış olarak ayarlandı
    pinMode(buttonPin, INPUT);  // Buton pini giriş olarak ayarlandı
}

void loop() {
    int buttonState = digitalRead(buttonPin); // Butonun durumunu oku
    
    if (buttonState == HIGH) { // Butona basılmışsa
        digitalWrite(LED_PIN, HIGH); // LED'i yak
        delay(DELAY_TIME); // Belirlenen süre boyunca bekle
        digitalWrite(LED_PIN, LOW); // LED'i söndür
    }
}
