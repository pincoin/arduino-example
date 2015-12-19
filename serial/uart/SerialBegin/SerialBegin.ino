/*
 * SerialBegin: UART 시리얼 통신 예제
 * 
 * 아두이노 보드에서 시리얼 통신으로 호스트 컴퓨터에 숫자를 증가하여 출력한다.
 * 
 * 주의: baud rate 기본값은 9600이며 터미널 포트 번호는 시스템에 따라 다르다.
 */
int number = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(number);
  number += 1;
  delay(1000);
}
