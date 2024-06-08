import time
import random

def read_sensor():
    return random.randint(0, 1000)

def send_sms(message):
    print(f"SMS Sent: {message}")

def log_event(event):
    print(f"Log: {event}")

def get_gps_location():
    return "Lat: -6.2088, Long: 106.8456"

def send_wifi_notification(location):
    print(f"WiFi Notification: Vehicle location is {location}")

def main():
    threshold = 500
    
    while True:
        sensor_value = read_sensor()
        print(f"Sensor Value: {sensor_value}")
        
        if sensor_value > threshold:
            print("Alarm Aktif!")
            send_sms("Peringatan: Deteksi getaran mencurigakan pada kendaraan Anda!")
            log_event("Getaran terdeteksi, alarm aktif")
            location = get_gps_location()
            send_wifi_notification(location)
        else:
            print("Tidak ada getaran mencurigakan.")
        
        time.sleep(1)

if __name__ == "__main__":
    main()
