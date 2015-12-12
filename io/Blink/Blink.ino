/*
 * Blink: 디지털 출력 핀에 연결된 LED 깜빡이기
 * 
 * 0.5초마다 LED를 깜빡인다.
 * 
 * 12번 핀에서 LED 및 220옴 저항 직렬 연결해서 GND로 연결
 */
const int ledPin = 12;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}
