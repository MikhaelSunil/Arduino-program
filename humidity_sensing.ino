#include <DHT.h>
#define DHTTYPE DHT22
int dht1 = 13;
;
DHT dht(dht1,DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();

}

void loop() {
 float humi = dht.readHumidity();
 float tem = dht.readTemperature();

 Serial.begin(humi);
 Serial.begin(tem);
Serial.print(tem);
Serial.print(humi);
}
