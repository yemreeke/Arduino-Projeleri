//Sayilar O.Katot    0         1         2         3         4         5         6        7          8         9
int sayilar[] = {0b0111111,0b0000110,0b1011011,0b1001111,0b1100110,0b1101101,0b1111101,0b0000111,0b1111111,0b1101111};
void setup(){
  for (int i=0; i <= 13; i++)
    pinMode(i,OUTPUT);        //Pinleri Çıkış Tanımladık
}
void loop(){
  for(int i=0;i<=99;i++){ 
    SayiYaz(i);  //0 99 arası sayıları yazdırdık ve 200ms bekledik.
    delay(200);  
  }
}
void SayiYaz(int sayi){
  int birlerBas= sayi%10;    // 2 Basamaklı sayının birler basamağını bulduk
  int onlarBas= sayi/10;     // 2 Basamaklı sayının onlar basamağını bulduk
  SayiYazBirler(birlerBas);  // Birler basamağını sağdaki display'e yazdırdık.
  SayiYazOnlar(onlarBas);    // Onlar basamağını solaki display'e yazdırdık.
}
void SayiYazBirler(int sayi){
  for (int pin = 0, Bit = 0; pin <= 6; pin++,Bit++){  //0 pinden 6. pine kadar digital write
    digitalWrite(pin, bitRead(sayilar[sayi], Bit)); //sayilar dizisindeki sayi indisindeki binary olarak
  } //sayiyi elde et. Örnek 1 için 0b0000110 . Bitleri sırasıyla oku ve pin numarasına 0(LOW)veya 1(HIGH)
} // olarak digital write ile yazıyoruz.  Bu fonksiyon tek bir sayıyı yazdırmak içindir.
void SayiYazOnlar(int sayi){
  for (int pin = 7, Bit = 0; pin <= 13; pin++,Bit++){   //üstteki fonskiyon ile aynıdır fakar bu kod onlar
    digitalWrite(pin, bitRead(sayilar[sayi], Bit)); //basamağı içindir o yüzden pin numaraları farklıdır.
  }
}
