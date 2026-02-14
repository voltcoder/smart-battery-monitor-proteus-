const int batteryPin = A0;
const int led1 = 3;
const int led2 = 4;
const int led3 = 5;

float voltage = 0.0;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  int adcValue = analogRead(batteryPin);

  // Assuming 5V reference and 10-bit ADC
  float vout = adcValue * (5.0 / 1023.0);

  // Voltage divider ratio (example: R1=10k, R2=5k)
  voltage = vout * 3.0;

  Serial.print("Battery Voltage: ");
  Serial.println(voltage);

  if (voltage > 12.0) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  else if (voltage > 11.0) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  else {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }

  delay(1000);
}

