int detektor = 8;
int buzzer = 4;

 
void setup() {
  Serial.begin(9500);
  pinMode(detektor.INPUT);
  pinMode(buzzer.OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(7, LOW);
 
}

void loop() {
  int ruch = digitalRead(detektor);

  if (ruch == HIGH){
    digitalWrite(7, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  else {
    digitalWrite(7, LOW);
    digitalWrite(buzzer, LOW);
  }
}

  
  
