void initWiFi() {
  Serial.println("Inisialisasi Wi-Fi...");
}

void sendWiFiNotification(String location) {
  Serial.print("Mengirim notifikasi: Lokasi kendaraan saat ini adalah ");
  Serial.println(location);
}
