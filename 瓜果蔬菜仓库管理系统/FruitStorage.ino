#include <Wire.h>
#include <DHT.h>
#include <BH1750.h>

#define DHTPIN 2
#define DHTTYPE DHT22
#define MQ7_PIN A0
#define MQ135_PIN A1

DHT dht(DHTPIN, DHTTYPE);
BH1750 lightMeter;

void setup() {
  Serial.begin(115200);
  Wire.begin();
  dht.begin();
  lightMeter.begin(BH1750::CONTINUOUS_HIGH_RES_MODE);
}

void loop() {
  static unsigned long lastUpdate = 0;
  if (millis() - lastUpdate >= 2000) {
    lastUpdate = millis();

    // 读取DHT22
    float h = dht.readHumidity();
    float t = dht.readTemperature();
    
    // 读取气体传感器（原始ADC值）
    int mq7Raw = analogRead(MQ7_PIN);
    int mq135Raw = analogRead(MQ135_PIN);
    
    // 读取光照强度
    float lux = lightMeter.readLightLevel();

    // 构建数据包
    String data = "TEMP:" + String(t,1) +
                  ",HUMI:" + String(h,1) +
                  ",MQ7:" + mq7Raw +
                  ",MQ135:" + mq135Raw +
                  ",LUX:" + String(lux,1);

    Serial.println(data);
  }
}