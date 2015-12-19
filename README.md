# arduino-example
아두이노 예제 프로그램

### io

디지털 입출력과 아날로그 입력을 다룬다.

주요 함수
 * pinMode()
 * digitalWrite()
 * digitalRead()
 * analogRead()
 * delay()
 * Serial.begin()
 * Serial.println()

디지털 출력

예제 이름 | 설명
--------- | ----
[Blink](io/Blink/Blink.ino) | LED 깜빡이기

디지털 입력 - 스위치 누르면 LED 켜기

예제 이름 | 설명
--------- | ----
[FloatingInput](io/FloatingInput/FloatingInput.ino) | 플로팅 상태 입력
[SwitchWithExtPullDown](io/SwitchWithExtPullDown/SwitchWithExtPullDown.ino) | 외부 풀다운 저항 연결
[SwitchWithExtPullUp](io/SwitchWithExtPullUp/SwitchWithExtPullUp.ino) | 외부 풀업 저항 연결
[DigitalInputPullUp](io/DigitalInputPullUp/DigitalInputPullUp.ino) | 내부 풀업 저항

아날로그 입력 - 가변저항 값에 따라 LED 깜빡이기 제어

예제 이름 | 설명
--------- | ----
[PotentiometerInput](io/PotentiometerInput/PotentiometerInput.ino) | 0~1023 값으로 아날로그 입력
[PotentiometerInputPercent](io/PotentiometerInputPercent/PotentiometerInputPercent.ino) | 아날로그 입력값 0~100 백분율 변환

### pwm

PWM(펄스 폭 변조) 방식으로 아날로그 출력과 유사한 효과를 얻는다.

주요 함수
 * analogWrite()

예제 이름 | 설명
--------- | ----
PwmLed | PWM 출력으로 LED 밝기 조절
PwmRgbLed | 3색 RGB LED 조절

### serial

시리얼 통신으로 UART, SPI, I2C 예제를 다룬다.

UART

예제 이름 | 설명
--------- | ----
[SerialBegin](serial/uart/SerialBegin/SerialBegin.ino) | 시리얼 통신 시작하기

SPI, I2C, 블루투스

### display

디스플레이 모듈 예제

### interrupt

인터럽트/폴링 예제

### motors

DC모터, 서보모터, BLDC 모터 예제

### sensor

각종 센서 예제

예제 이름 | 설명
--------- | ----
[InfraredProximitySensor](sensor/InfraredProximitySensor/InfraredProximitySensor.ino) | 적외선 센서(발광부, 수광부) 예제

### test

테스트 프로그램
