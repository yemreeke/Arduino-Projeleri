//Türkiye Cumhuriyeti İstiklal Marşı   
//Söz    : Mehmet Akif Ersoy
//Beste  : Osman Zeki Üngör
int ButonPin=7,buzzer = 8;
int a=440,ad=466,b=494,c=523,cd=554,d=587,dd=622,e=659,f=698;
int fd=740,g=784,gd=830,a2=880,ad2=932,b2=988,c2=1046,cd2=1108;
int d2=1174,dd2=1244,e2=1318,f2=1396,fd2=1480,g2=1568,gd2=1660;
int a3 = 1760;  // Notalar ve karşılık gerek frekans değerleri
// NOTALAR  c=do , cd=do diyez , d=re , dd=re diyez , e=mi , f=fa 
// fd=fa diyez , g=sol , gd=sol diyez , a=la , ad=la diyez , b= si
void setup()   
{  
  pinMode(ButonPin,INPUT); //Butonu Giriş Olarak
  pinMode(buzzer, OUTPUT); //Buzzer Çıkış Olarak
}                          //Tanımladık
void loop()
{  
  if(digitalRead(ButonPin)) //Butona Basılırsa
    Oynat(); // Oynatmaya Başlat
}
void Oynat(){
    //Korkma Sönmez Bu Şafak  
    tone(buzzer, c);              //KODLARIN TAMAMIMA
    delay(800);                   //ULAŞMAK İÇİN LİNKE
    tone(buzzer, f);              //TIKLAYABİLİRSİNİZ...
    delay(800);
    tone(buzzer, g);
    delay(800);
    tone(buzzer, gd);
    delay(800);
    tone(buzzer, e);
    delay(400);
    tone(buzzer, g);
    delay(200);        
    tone(buzzer, f);
    delay(1600);        
    noTone(buzzer);
    delay(300);
    //Larda Yüzden Al Sancak
    tone(buzzer, f);
    delay(800);        
    tone(buzzer, ad2);
    delay(800);        
    tone(buzzer, c2);
    delay(800);        
    tone(buzzer, cd2);
    delay(800);
    tone(buzzer, a2);
    delay(400);
    tone(buzzer, c2);
    delay(200);
    tone(buzzer, ad2);
    delay(1600);        
    //Sönmeden Yurdumun Üstünde Tüten En Son Ocak O Be
    tone(buzzer, c2);
    delay(200);        
    tone(buzzer, ad2);
    delay(200);        
    tone(buzzer, c2);
    delay(200);        
    tone(buzzer, g);
    delay(400);        
    noTone(buzzer);
    delay(100);  
    tone(buzzer, g);
    delay(400);        
    tone(buzzer, ad);
    delay(200);
    tone(buzzer, gd);
    delay(400);   
    tone(buzzer, e);
    delay(200);
    tone(buzzer, f);
    delay(400);   
    tone(buzzer, g);
    delay(200);
    tone(buzzer, gd);
    delay(400);        
    tone(buzzer, ad);
    delay(200);        
    tone(buzzer, c2);
    delay(400);        
    tone(buzzer, cd2);
    delay(200);        
    tone(buzzer, dd2);
    delay(400);        
    tone(buzzer, f2);
    delay(200);        
    tone(buzzer, dd2);
    delay(400);     
    //Nim Milletimin
    tone(buzzer, dd);
    delay(200);
    tone(buzzer, d);
    delay(200);
    tone(buzzer, dd);
    delay(200);
    tone(buzzer, c2);
    delay(800);
    tone(buzzer, ad);
    delay(800);
    tone(buzzer, gd);
    delay(1600);
    // Yıldızıdır Parlayacak O benim
    tone(buzzer, c);
    delay(200);
    tone(buzzer, b);
    delay(200);
    tone(buzzer, c);
    delay(200);
    tone(buzzer, g);
    delay(800);
    tone(buzzer, c);
    delay(800);
    tone(buzzer, c2);
    delay(800);
    tone(buzzer, ad);
    delay(200);
    tone(buzzer, gd);
    delay(200);
    tone(buzzer, g);
    delay(400);
    tone(buzzer, gd);
    delay(200);
    tone(buzzer, f);
    delay(800);
    //Dir O Benim Milletimindir Ancak
    tone(buzzer, f2);
    delay(800);
    tone(buzzer, dd2);
    delay(200);
    tone(buzzer, cd2);
    delay(400);
    tone(buzzer, c2);
    delay(200);
    tone(buzzer, ad);
    delay(400);
    tone(buzzer, gd);
    delay(200);
    tone(buzzer, g);
    delay(400);
    tone(buzzer, f);
    delay(200);
    tone(buzzer, c2);
    delay(400);
    tone(buzzer, c);
    delay(800);
    tone(buzzer, f);
    delay(1600);
    //İKİNCİ KITA
    //Çatma Kurban Olayım
    tone(buzzer, c);
    delay(800);
    tone(buzzer, f);
    delay(800);
    tone(buzzer, g);
    delay(800);
    tone(buzzer, gd);
    delay(800);
    tone(buzzer, e);
    delay(400);
    tone(buzzer, g);
    delay(200);        
    tone(buzzer, f);
    delay(1600);        
    noTone(buzzer);
    delay(300);
    //Çehreni Ey Nazlı Hilal
    tone(buzzer, f);
    delay(800);        
    tone(buzzer, ad2);
    delay(800);        
    tone(buzzer, c2);
    delay(800);        
    tone(buzzer, cd2);
    delay(400);
    tone(buzzer, ad2);
    delay(400);
    tone(buzzer, a2);
    delay(400);
    tone(buzzer, c2);
    delay(400);
    tone(buzzer, ad2);
    delay(800);        
    //Kahraman Irkıma Bir Gül Ne Bu Şiddet Bu Celal Sana
    tone(buzzer, c2);
    delay(200);        
    tone(buzzer, ad2);
    delay(200);        
    tone(buzzer, c2);
    delay(200);        
    tone(buzzer, g);
    delay(400);        
    noTone(buzzer);
    delay(100);  
    tone(buzzer, g);
    delay(400);        
    tone(buzzer, ad);
    delay(200);
    tone(buzzer, gd);
    delay(400);   
    tone(buzzer, e);
    delay(200);
    tone(buzzer, f);
    delay(400);   
    tone(buzzer, g);
    delay(200);
    tone(buzzer, gd);
    delay(400);        
    tone(buzzer, ad);
    delay(200);        
    tone(buzzer, c2);
    delay(400);        
    tone(buzzer, cd2);
    delay(200);        
    tone(buzzer, dd2);
    delay(400);        
    tone(buzzer, f2);
    delay(200);        
    tone(buzzer, dd2);
    delay(400);     
    //Olmaz Dökülen
    tone(buzzer, dd);
    delay(200);
    tone(buzzer, d);
    delay(200);
    tone(buzzer, dd);
    delay(200);
    tone(buzzer, c2);
    delay(800);
    tone(buzzer, ad);
    delay(800);
    tone(buzzer, gd);
    delay(1600);
    //Kanlarımız Sonra Helal Hakkıdır
    tone(buzzer, c);
    delay(200);
    tone(buzzer, b);
    delay(200);
    tone(buzzer, c);
    delay(200);
    tone(buzzer, g);
    delay(800);
    tone(buzzer, c);
    delay(800);
    tone(buzzer, c2);
    delay(800);
    tone(buzzer, ad);
    delay(200);
    tone(buzzer, gd);
    delay(200);
    tone(buzzer, g);
    delay(400);
    tone(buzzer, gd);
    delay(200);
    tone(buzzer, f);
    delay(800);
    //Hakk'a Tapan Milletimin İstiklal
    tone(buzzer, f2);
    delay(800);
    tone(buzzer, dd2);
    delay(200);
    tone(buzzer, cd2);
    delay(400);
    tone(buzzer, c2);
    delay(200);
    tone(buzzer, ad);
    delay(400);
    tone(buzzer, gd);
    delay(200);
    tone(buzzer, g);
    delay(400);
    tone(buzzer, f);
    delay(200);
    tone(buzzer, c2);
    delay(400);
    tone(buzzer, c);
    delay(800);
    tone(buzzer, f);
    delay(1600);
    noTone(buzzer);
}
