/*
 * PontentiometerInput: 가변저항 연결로 아날로그 입력(0~1023) 예제
 * 
 * 가변저항(potentiometer)으로 아날로그 입력으로 0~1023 값을 받는다.
 * 
 * 12번 핀에서 LED 및 220옴 저항 직렬 연결해서 GND로 연결
 * 아날로그 0번 핀에 가변저항을 연결
 */
const int ledPin = 12;
const int potPin = 0;

int value = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
}

void loop() {
  value = analogRead(potPin);
  
  Serial.println(value);

  digitalWrite(ledPin, HIGH);
  delay(value);
  digitalWrite(ledPin, LOW);
  delay(value);
}
