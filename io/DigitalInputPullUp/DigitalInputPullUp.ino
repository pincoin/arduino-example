/*
 * DigitalInputPullUp: 내부 소프트웨어 풀업 저항 연결 버튼 예제
 * 
 * 버튼이 눌리면 LED를 켜고 떼면 LED를 끈다.
 * 
 * 12번 핀에서 LED 및 220옴 저항 직렬 연결해서 GND로 연결
 * 2번 핀에 스위치만 연결
 * 
 * 주의: 내부 풀업 저항 연결시 버튼이 눌리면 LOW 상태
 */
const int ledPin = 12;
const int buttonPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    digitalWrite(ledPin, HIGH);  
  } else {
    digitalWrite(ledPin, LOW); 
  }
}
