int counter = 0;
int timer = 1000;
void setup() {
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  counter++; 

  switch (counter){
    case 0:
      anzeigenNull();
    break;
    case 1;
      anzeigenEins();
    break;
    case 2:
      anzeigenZwei();
    break;
    case 3:
      anzeigenDrei();
    break;
    case 4:
      anzeigenVier();
    break;
    case 5:
      anzeigenFuenf();
    break;
    case 6:
      anzeigenSechs();
    break;
    case 7:
      anzeigenSieben();
    break;
    case 8:
      anzeigenAcht();
    break;
    case 9:
      anzeigenNeun();
    break;
  }
}


void anzeigenNull(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}
void anzeigenEins(){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}
void anzeigenZwei(){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}
void anzeigenDrei(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}
void anzeigenVier(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
void anzeigenFuenf(){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
void anzeigenSechs(){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
void anzeigenSieben(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
void anzeigenAcht(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}
void anzeigenNeun(){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}
