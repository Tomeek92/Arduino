int zielony = 11;
int zolty = 10;
int czerwony = 9;
 
void setup() {                
  pinMode(zielony, OUTPUT); 
  pinMode(zolty, OUTPUT);
  pinMode(czerwony, OUTPUT);
}
 
void loop() {
  digitalWrite(czerwony, HIGH);       
  delay(4000);                   
  digitalWrite(zolty, HIGH);    
  delay(2000);                  
  digitalWrite(czerwony, LOW);        
  digitalWrite(zolty, LOW);    
  digitalWrite(zielony, HIGH);     
  delay(3000);                   
  digitalWrite(zielony, LOW);      
  digitalWrite(zolty,HIGH);     
  delay(1000);                   
  digitalWrite(zolty,LOW); 
  digitalWrite(czerwony, HIGH);       
  delay(4000);      
digitalWrite(czerwony, LOW);  
}
