# IoT Arduino Security Cars
Sistem Keamanan Mobil Terintegrasi dengan Deteksi Pencurian dan Alarm Berbasis IoT

Sistem Keamanan Mobil Terintegrasi ini dirancang untuk melindungi kendaraan Anda dari upaya pencurian dengan menggunakan teknologi sensor, GPS, dan IoT (Internet of Things). Sistem ini tidak hanya mendeteksi getaran atau aktivitas mencurigakan pada kendaraan tetapi juga memberikan pemberitahuan real-time kepada pemilik kendaraan melalui SMS dan Wi-Fi. Fitur tambahan seperti logging kejadian dan sistem pengunci pintu otomatis memastikan keamanan yang lebih baik. Proyek ini menggunakan mikrokontroler, sensor getaran, modul GPS, modul Wi-Fi, dan modul GSM untuk mengimplementasikan fungsionalitas yang diinginkan.

## Fitur Utama:
  1. **Deteksi Getaran:** Menggunakan sensor getaran untuk mendeteksi aktivitas mencurigakan pada kendaraan.
  2. **Alarm Suara:** Aktifkan buzzer untuk memberikan peringatan suara saat aktivitas mencurigakan terdeteksi.
  3. **Pemberitahuan SMS:** Mengirim SMS otomatis kepada pemilik kendaraan jika ada upaya pencurian.
  4. **Lokasi GPS:** Menggunakan modul GPS untuk melacak lokasi kendaraan dan mengirimkannya melalui SMS dan Wi-Fi.
  5. **Notifikasi Wi-Fi:** Mengirim notifikasi ke pemilik melalui internet untuk informasi real-time.
  6. **Logging Kejadian:** Mencatat semua kejadian deteksi untuk analisis lebih lanjut.
  7. **Pengunci Pintu Otomatis:** Mengunci pintu secara otomatis saat sistem mendeteksi upaya pencurian.

## Pedoman Proyek
  1. **Persiapan Perangkat Keras**
     * **Mikrokontroler (Arduino/Raspberry Pi):** Platform utama untuk menjalankan kode.
     * **Sensor Getaran:** Untuk mendeteksi aktivitas mencurigakan.
     * **Buzzer/Speaker:** Untuk memberikan alarm suara.
     * **Modul GPS:** Untuk melacak lokasi kendaraan.
     * **Modul Wi-Fi:** Untuk koneksi internet dan notifikasi.
     * **Modul GSM:** Untuk mengirim SMS.
     * **Breadboard dan Kabel Penghubung:** Untuk merangkai komponen.
  1. **Persiapan Perangkat Lunak**
     * **Arduino IDE:** Untuk menulis dan meng-upload kode ke mikrokontroler.
     * **Python (untuk simulasi):** Untuk menguji logika sistem sebelum implementasi fisik.
  1. **Implementasi Kode**
     * `main.ino`: Kode utama yang mengatur keseluruhan sistem.
     * `gps.ino`: Modul untuk pengelolaan fungsi GPS.
     * `wifi.ino`: Modul untuk pengelolaan fungsi Wi-Fi.
     * `sms.ino`: Modul untuk pengelolaan fungsi SMS.
     * `logging.ino`: Modul untuk pengelolaan logging kejadian.
     * `python_simulation.py`: Script untuk simulasi dan pengujian logika sistem.
  1. **Inisialisasi dan Pengujian**
     * **Rangkaian Hardware:** Sambungkan semua komponen perangkat keras sesuai dengan pin yang ditentukan dalam kode.
     * **Upload Kode:** Unggah semua modul kode ke mikrokontroler menggunakan Arduino IDE.
     * **Simulasi Awal:** Jalankan simulasi menggunakan python_simulation.py untuk memastikan logika bekerja dengan baik.
     * **Pengujian di Lapangan:** Uji sistem pada kendaraan nyata untuk memastikan semua fitur bekerja dengan baik dan melakukan penyesuaian jika diperlukan.


  ### Author

- [@Imhunterand](https://www.github.com/imhunterand)
- [@PWN0SEC](https://www.github.com/pwn0sec)







