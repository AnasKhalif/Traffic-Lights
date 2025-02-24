#include <Arduino.h>

int ledm = 18; // Pin LED Merah
int ledk = 5;  // Pin LED Kuning
int ledh = 17; // Pin LED Hijau

void setup() {
  Serial.begin(115100);
  pinMode(ledm, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledh, OUTPUT);
}

void loop() {
  digitalWrite(ledm, HIGH);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, LOW);
  Serial.println("\nMerah Menyala");
  Serial.println("Kuning Mati");
  Serial.println("Hijau Mati");
  delay(30000); // 30 detik

  // Kuning Menyala
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, HIGH);
  digitalWrite(ledh, LOW);
  Serial.println("\nMerah Mati");
  Serial.println("Kuning Menyala");
  Serial.println("Hijau Mati");
  delay(3000); // 3 detik

  // Hijau Menyala
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, HIGH);
  Serial.println("\nMerah Mati");
  Serial.println("Kuning Mati");
  Serial.println("Hijau Menyala");
  delay(20000); // 20 detik
}
