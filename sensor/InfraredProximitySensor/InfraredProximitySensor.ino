/*
 * InfraredProximitySensor: 적외선 센서(발광부, 수광부) 예제
 * 
 * 적외선 센서로 아날로그 입력을 받는다.
 * 
 * 13번 핀 아두이노 내장 LED
 * 아날로그 0번 핀에 적외선 센서 입력
 * 
 * 주의: 변화의 기준이 threshold 값은 실험값에 알맞게 설정
 */
const int inputPin = 0;
const int outputPin = 13;
int value = 0;
int threshold = 600;

void setup() {
  Serial.begin(9600);
  pinMode(outputPin, OUTPUT);
}

void loop() {
  digitalWrite(outputPin, LOW);

  value = analogRead(inputPin);

  Serial.println(value);

  if (value < threshold) {
    digitalWrite(outputPin, HIGH);
    delay(1000);
  }
}
