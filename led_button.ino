//Buton ile LED Kontrolü
const int buttonPin = 2;  // Buton 2 numaralı pine bağlı
const int ledPin = 13;    // LED 13 numaralı pine bağlı

void setup() {
    pinMode(buttonPin, INPUT);  // Buton giriş olarak ayarlandı
    pinMode(ledPin, OUTPUT);    // LED çıkış olarak ayarlandı
}

void loop() {
    int buttonState = digitalRead(buttonPin);  // Butonun durumunu oku
    
    if (buttonState == HIGH) {  // Butona basıldıysa
        digitalWrite(ledPin, HIGH); // LED'i yak
    } else {
        digitalWrite(ledPin, LOW); // LED'i söndür
    }
}
// Buton ile LED Aç/Kapat
const int buttonPin = 2;
const int ledPin = 13;

bool ledState = false;  // LED başlangıçta kapalı
bool lastButtonState = LOW;  // Son buton durumu

void setup() {
    pinMode(buttonPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    bool buttonState = digitalRead(buttonPin);  // Butonun mevcut durumunu oku

    if (buttonState == HIGH && lastButtonState == LOW) { // Butona basıldığında (önceden LOW ise)
        ledState = !ledState;  // LED durumunu değiştir (Aç/Kapat)
        digitalWrite(ledPin, ledState);  // LED'i yeni duruma ayarla
        delay(200);  // Yanlış algılamaları önlemek için gecikme
    }

    lastButtonState = buttonState; // Buton durumunu güncelle
}
