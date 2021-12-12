//Sayilar O.Katot    0         1         2         3         4         5         6        7          8         9
int sayilar[] = {0b0111111,0b0000110,0b1011011,0b1001111,0b1100110,0b1101101,0b1111101,0b0000111,0b1111111,0b1101111};
int sayac=0;
int butonArtis=10;
int butonSifirla=11;
int butonAzalis=12;
void setup() {
  for(int i=2;i<=9;i++)   {
    pinMode(i,OUTPUT);     
  }
  pinMode(butonArtis,INPUT);    
  pinMode(butonSifirla,INPUT);
  pinMode(butonAzalis,INPUT);    
}
void loop() {
  SayiYaz(sayac);
  if(digitalRead(butonArtis)){      
    if(sayac!=9)                    
      sayac++;
    else{
      digitalWrite(9,1);        
      delay(500);               
      digitalWrite(9,0);       
    }
    delay(300);
  }
  else if(digitalRead(butonAzalis)){
    if(sayac!=0)
      sayac--;
    else{
      digitalWrite(9,1);
      delay(500);
      digitalWrite(9,0);
    }
    delay(300);
  }
  else if(digitalRead(butonSifirla)){
    sayac=0;
    delay(300);
  }
}
void SayiYaz(int sayi){
  for (int pin = 2, Bit = 0; pin <= 8; pin++,Bit++){
    digitalWrite(pin, bitRead(sayilar[sayi], Bit)); 
  }
}
