void initSMS() {
  Serial.println("Inisialisasi SMS...");
}

void sendSMS(String message) {
  Serial.print("Mengirim SMS: ");
  Serial.println(message);
}
