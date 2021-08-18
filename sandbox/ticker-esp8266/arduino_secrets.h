#ifndef _ARDUINO_SECRETS_H_
#define _ARDUINO_SECRETS_H_

#define SECRET_SSID "IER"
#define SECRET_PASS "acadier2014"

#ifdef _ARDUINO_MQTT_CLIENT_H_
#define SECRET_BROKER "iot.ier.unam.mx"
#define SECRET_PORT 1883
#define SECRET_DEVID "39cb50a0-65e6-11e9-9ce3-f3551dc81c40"
#define SECRET_TOKEN "Br53oHwcxBgXYuGB6cVC"
#define SECRET_TOPIC "v1/devices/me/telemetry"
#endif

#ifdef ESP8266HTTPClient_H_
#define SECRET_URL "http://iot.ier.unam.mx:8080/api/v1/Br53oHwcxBgXYuGB6cVC/telemetry"
#define SECRET_WWW_USERNAME "admin"
#define SECRET_WWW_PASSWORD "password"
#endif

#endif