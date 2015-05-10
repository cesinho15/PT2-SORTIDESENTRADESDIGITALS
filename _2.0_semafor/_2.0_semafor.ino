
void setup() {
  
  pinMode(12, OUTPUT); //verd
  pinMode(11, OUTPUT); //Groc
  pinMode(10, OUTPUT); //Vermell
  pinMode(9, OUTPUT); //Verd
  pinMode(8, OUTPUT); //Groc
  pinMode(7, OUTPUT); //Vermell
 

}


void loop() {
  //primera posicio del semafor (2 vermell
  digitalWrite(12, LOW);  
  digitalWrite(11, LOW); 
  digitalWrite(10, HIGH);  //vermell
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(7, HIGH); //vermell
  
  
  delay(1000);   
  // segona posicio Verd 1 semafor l'altre Vermell
  digitalWrite(12, HIGH); //verd
  digitalWrite(11, LOW); 
  digitalWrite(10, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(7, HIGH);  //vermell
  
  delay(3000);  
  
  //tercera posicio groc el semafor que estava en verd en l'etapa 2 i l'altre continua en Vermell
  digitalWrite(12, LOW); 
  digitalWrite(11, HIGH); //groc
  digitalWrite(10, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(7, HIGH); //vermell

  
  delay(1000);  
  
  // Vermell el semafor que estava en groc anteriorment i Verd l'altre
  digitalWrite(12, LOW); 
  digitalWrite(11, LOW); 
  digitalWrite(10, HIGH); //vermell
  digitalWrite(9, HIGH); //verd
  digitalWrite(8, LOW); 
  digitalWrite(7, LOW); 

  
  delay(3000);  
// continua vermell el semafor anterior i el que estava verd ara groc
  digitalWrite(12, LOW); 
  digitalWrite(11, LOW); 
  digitalWrite(10, HIGH); //vermell
  digitalWrite(9, LOW); 
  digitalWrite(8, HIGH); //groc
  digitalWrite(7, LOW); 

  
  delay(1000);  
 // Vermell tots 2 semafors tornar a començar...  
  digitalWrite(12, LOW); 
  digitalWrite(11, LOW); 
  digitalWrite(10, HIGH); //vermell
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(7, HIGH); //vermell

  
  delay(1000);  
}
