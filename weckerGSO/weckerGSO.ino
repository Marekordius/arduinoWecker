int counter = 0;
int timer = 1000;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  counter++;

  if ((counter % 2) != 0){
    digitalWrite(2, HIGH);
  }else{
    digitalWrite(2, LOW);
  }

  if ((counter % 4) > 1){
    digitalWrite(4, HIGH);
  }else{
    digitalWrite(4, LOW);
  }

  if ((counter % 8) > 3){
    digitalWrite(6, HIGH);
  }else{
    digitalWrite(6, LOW);
  }

  if ((counter % 16) > 7){
    digitalWrite(8, HIGH);
  }else{
    digitalWrite(8, LOW);
  }

  if ((counter % 32) > 15){
    digitalWrite(10, HIGH);
  }else{
    digitalWrite(10, LOW);
  }

  if ((counter % 64) > 31){
    digitalWrite(12, HIGH);
  }else{
    digitalWrite(12, LOW);
  }

  delay(timer);
  
}
