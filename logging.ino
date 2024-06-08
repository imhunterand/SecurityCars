void initLogging() {
  Serial.println("Inisialisasi logging...");
}

void logEvent(String event) {
  Serial.print("Log: ");
  Serial.println(event);
}
