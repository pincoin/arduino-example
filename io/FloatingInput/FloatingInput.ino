/*
 * FloatingInput: 플로팅 상태의 버튼 예제
 * 
 * 버튼이 눌리면 시리얼 연결로 1을 출력한다.
 * 버튼을 떼면 1과 0이 불안정한 상태로 확정적이지 않다.
 * 
 * 2번 핀에 풀업/풀다운 저항 연결 없이 5V 전압에서 스위치로 바로 연결
 */
const int buttonPin = 2;

void setup() {
  Serial.begin(9600);

  pinMode(buttonPin, INPUT);
}

void loop() {
  Serial.println(digitalRead(buttonPin));  
}
