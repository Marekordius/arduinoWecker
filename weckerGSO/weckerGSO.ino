int counter = 1;
int timer;

void setup() {
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);

  counter = 0;
  timer = 1000;
}

void anzeigenNull(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}
void anzeigenEins(){
  char stat[] = {HIGH, LOW, LOW, LOW};
  for(int i = 2; i <= 5; i++ ){
    digitalWrite(i, stat[i-2]);
  }
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

void loop() {

  switch (counter){
    case 1:
        anzeigenNull();
      break;
    case 2:
        anzeigenEins();
      break;
    case 3:
        anzeigenZwei();
      break;
    case 4:
        anzeigenDrei();
      break;
    case 5:
        anzeigenVier();
      break;
    case 6:
        anzeigenFuenf();
      break;
    case 7:
        anzeigenSechs();
      break;
    case 8:
        anzeigenSieben();
      break;
    case 9:
        anzeigenAcht();
      break;
    case 10:
        anzeigenNeun();
      break;
    case 11:
        counter = 0;
      break;
  }
  
  delay(timer);
  counter++; 
}



