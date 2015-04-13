
void setup() {
  
  pinMode(12, OUTPUT); //verd
  pinMode(11, OUTPUT); //Groc
  pinMode(10, OUTPUT); //Vermell
  pinMode(9, OUTPUT); //Verd
  pinMode(8, OUTPUT); //Groc
  pinMode(7, OUTPUT); //Vermell
 

}


void loop() {
  
  digitalWrite(12, LOW);  
  digitalWrite(11, LOW); 
  digitalWrite(10, HIGH);  //vermell
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(7, HIGH); //vermell
  
  
  delay(1000);   
  
  digitalWrite(12, HIGH); //verd
  digitalWrite(11, LOW); 
  digitalWrite(10, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(7, HIGH);  //vermell
  
  delay(3000);  
  
  
  digitalWrite(12, LOW); 
  digitalWrite(11, HIGH); //groc
  digitalWrite(10, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(7, HIGH); //vermell

  
  delay(1000);  
  
  
  digitalWrite(12, LOW); 
  digitalWrite(11, LOW); 
  digitalWrite(10, HIGH); //vermell
  digitalWrite(9, HIGH); //verd
  digitalWrite(8, LOW); 
  digitalWrite(7, LOW); 

  
  delay(3000);  

  digitalWrite(12, LOW); 
  digitalWrite(11, LOW); 
  digitalWrite(10, HIGH); //vermell
  digitalWrite(9, LOW); 
  digitalWrite(8, HIGH); //groc
  digitalWrite(7, LOW); 

  
  delay(1000);  
   
  digitalWrite(12, LOW); 
  digitalWrite(11, LOW); 
  digitalWrite(10, HIGH); //vermell
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(7, HIGH); //vermell

  
  delay(1000);  
}
