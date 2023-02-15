#include <Adafruit_CircuitPlayground.h>
#define TINY_GSM_MODEM_ESP8266
#include "Utils.h"
#include <cstring>
#include <TinyGsmClient.h>
#include <PubSubClient.h>
#define SerialMon Serial
#define SerialAT Serial1

/*
  ----- Your WiFi connection credentials, if applicable -----
*/
const char wifiSSID[] = "";
const char wifiPass[] = "";


const char MQTT_CLIENTID[] = __DATE__ __TIME__;

// MQTT details
const char* broker = "192.168.1.108";

const char doorbellTopic[] = "doorbell";

TinyGsm modem(SerialAT);
TinyGsmClient client(modem);
PubSubClient mqtt(client);

uint32_t lastReconnectAttempt = 0;
long lastPublished = 0;

boolean mqttConnect() {
  printLine("Connecting to ", broker);
  boolean status = mqtt.connect(MQTT_CLIENTID);
  if (status == false) {
    printLine(" Broker connection failure");
    return false;
  }
  SerialMon.println(" Broker connection success");
  return mqtt.connected();
}

void connect_and_publish(const char* info){
  if (!mqtt.connected()) {
    uint32_t t = millis();
    if (t - lastReconnectAttempt > 10000L) {
      lastReconnectAttempt = t;
      if (mqttConnect()) {
        lastReconnectAttempt = 0;
        Serial.println("publishing doorbell Info");
        mqtt.publish(doorbellTopic, info);
      }
    }
    delay(100);
    return;
  }
  delay(1000);
}
