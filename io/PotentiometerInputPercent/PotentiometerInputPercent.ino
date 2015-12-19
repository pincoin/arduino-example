/*
 * PontentiometerInputPercent: 가변저항 연결로 아날로그 입력(0~100) 예제
 * 
 * 가변저항(potentiometer)으로 아날로그 입력을 0~1023을 0~100으로 변환한다.
 * 
 * 12번 핀에서 LED 및 220옴 저항 직렬 연결해서 GND로 연결
 * 아날로그 0번 핀에 가변저항을 연결
 */
const int ledPin = 12;
const int potPin = 0;

int value = 0;
int percent = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
}

void loop() {
  value = analogRead(potPin);
  percent = map(value, 0, 1023, 0, 100);
  
  Serial.println(percent);

  digitalWrite(ledPin, HIGH);
  delay(percent);
  digitalWrite(ledPin, LOW);
  delay(100 - percent);
}
