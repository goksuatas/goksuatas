//switch case
const int buttonPin = 2;  // Buton 2 numaralı pine bağlı
const int redLed = 9;     // Kırmızı LED 9. pine bağlı
const int greenLed = 10;  // Yeşil LED 10. pine bağlı
const int blueLed = 11;   // Mavi LED 11. pine bağlı

int buttonState = 0;
int mode = 0; // LED modunu tutar

void setup() {
    pinMode(buttonPin, INPUT);
    pinMode(redLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(blueLed, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    buttonState = digitalRead(buttonPin); // Buton durumunu oku

    if (buttonState == HIGH) { 
        mode++;  // Butona basıldığında mod değiştir
        if (mode > 3) mode = 0; // 3'ten büyük olursa sıfırla
        delay(300); // Yanlış algılamaları önlemek için gecikme
    }

    switch (mode) {
        case 0: // Tüm LED’leri kapat
            digitalWrite(redLed, LOW);
            digitalWrite(greenLed, LOW);
            digitalWrite(blueLed, LOW);
            Serial.println("LED Kapali");
            break;
        case 1: // Kırmızı LED’i yak
            digitalWrite(redLed, HIGH);
            digitalWrite(greenLed, LOW);
            digitalWrite(blueLed, LOW);
            Serial.println("Kirmizi LED Yaniyor");
            break;
        case 2: // Yeşil LED’i yak
            digitalWrite(redLed, LOW);
            digitalWrite(greenLed, HIGH);
            digitalWrite(blueLed, LOW);
            Serial.println("Yesil LED Yaniyor");
            break;
        case 3: // Mavi LE
