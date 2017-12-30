                      /*ARDUINO HOCAM SIFIRDAN ARDUINO ÖĞRENİYORUM-DERS #3*/
                      /*D
                      EĞİŞKEN TİPLERİ VE MANTIKSAL İŞLEMLER*/
int pot_degeri;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
pot_degeri=analogRead(A0);
if(pot_degeri>500)
{
  digitalWrite(13,HIGH);
  
  Serial.println(pot_degeri);
  
}
else if(pot_degeri<400)
{
   digitalWrite(13,LOW);
   
   
  Serial.println(pot_degeri);
  
}
else if(pot_degeri>400 && pot_deger<500)
{
  Serial.println("deger orta aralıkta");
  
}
delay(100);
}
