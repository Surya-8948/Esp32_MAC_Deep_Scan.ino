#include <WiFi.h>
#include <esp_wifi.h>

void setup() {

  Serial.begin(115200);

  WiFi.mode(WIFI_STA);

  delay(1000);

  uint8_t mac[6];

  esp_wifi_get_mac(WIFI_IF_STA, mac);

  Serial.printf("ESP32 MAC: %02X:%02X:%02X:%02X:%02X:%02X\n",mac[0], mac[1], mac[2],mac[3], mac[4], mac[5]);
}

void loop()
 {

}
