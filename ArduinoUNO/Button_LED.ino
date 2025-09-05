//Buttons and LED
// by PiyerX

#define button_pin 7
#define led_pin 13
int button_value;

void setup() {
  Serial.begin(9600);
  pinMode(button_pin, INPUT);
  pinMode(led_pin, OUTPUT);
}

void loop() {
  button_value = digitalRead(button_pin);
  Serial.println(button_value);
  delay(100);
  if (button_value == 0){
    digitalWrite(led_pin, HIGH);
  }
  else{
    digitalWrite(led_pin, 0);
  }
}