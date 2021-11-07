int led1=7;
int led2=6;
byte veri;
void setup() {
    Serial.begin(9600);
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
}
void loop() {
    if(Serial.available()){ //Serial Kullanabilir İse
        veri = Serial.read();         //Veriyi oku 
        if(veri=='W')                 //Gelen
            digitalWrite(led1,HIGH);  //Verileri
        else if(veri=='w')            //Kontrol
            digitalWrite(led1,LOW);   //Ederek
        else if(veri=='U')            //Uygun
            digitalWrite(led2,HIGH);  //Ledi
        else if(veri=='u')            //Aç
            digitalWrite(led2,LOW);   //Kapat
    }
}
