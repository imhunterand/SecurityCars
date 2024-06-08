#include "gps.ino"
#include "wifi.ino"
#include "sms.ino"
#include "logging.ino"

const int sensorPin = A0;
const int buzzerPin = 9;
const int lockPin = 8;
const int threshold = 500;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(lockPin, OUTPUT);
  Serial.begin(9600);

  initGPS();
  initWiFi();
  initSMS();
  initLogging();
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  
  if (sensorValue > threshold) {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(lockPin, HIGH);
    sendSMS("Peringatan: Deteksi getaran mencurigakan pada kendaraan Anda!");
    logEvent("Getaran terdeteksi, alarm aktif");
    String location = getGPSLocation();
    sendWiFiNotification(location);
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(lockPin, LOW);
  }
  
  delay(100);
}
