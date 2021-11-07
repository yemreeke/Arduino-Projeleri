int rgb_Kirmizi=11;
int rgb_Yesil=10;
int rgb_Mavi=9;
int sure = 500;
void setup() {
  pinMode(rgb_Kirmizi,OUTPUT);
  pinMode(rgb_Yesil,OUTPUT);
  pinMode(rgb_Mavi,OUTPUT);
}
void loop() {
  digitalWrite(rgb_Kirmizi,1); 
  delay(sure); 
  digitalWrite(rgb_Kirmizi,0);
  delay(sure);
  digitalWrite(rgb_Yesil,1);
  delay(sure);
  digitalWrite(rgb_Yesil,0);
  delay(sure);
  digitalWrite(rgb_Mavi,1);
  delay(sure);
  digitalWrite(rgb_Mavi,0);
  delay(sure);
}
