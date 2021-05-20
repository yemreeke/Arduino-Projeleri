int echoPin = 6;
int trigPin = 7;
int maksimum=100; //100 cm
int minumum =3; //3 cm

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600); 
}
void loop() {
  digitalWrite(trigPin,HIGH); //Enerji Verdik
  delayMicroseconds(10); //10 bekledik
  digitalWrite(trigPin,LOW); //Enerji Kestik
  unsigned long sure = pulseIn(echoPin, HIGH);
  double toplamYol = (double)sure*0.034;
  int mesafe = toplamYol/2;
  if(mesafe>minumum && mesafe<maksimum){
    Serial.print("Mesafe: ");
    Serial.print(mesafe);
    Serial.println("cm");
  }
  delay(500);
}
