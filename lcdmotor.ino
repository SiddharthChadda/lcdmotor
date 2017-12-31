#include<LiquidCrystal.h>
LiquidCrystal lcd {13,12,7,6,5,4};

  int m1p=2;
  int m1n=3;
  int m2p=4;
  int m2n=5;
  int b1;
  int b2;
  
  void setup() {
  // put your setup code here, to run once:

  pinMode(m1p,1);
  pinMode(m1n,1);

  pinMode(m2p,1);
  pinMode(m2n,1);

pinMode(A0,0);
pinMode(A1,0);
  lcd.begin(16,2);


}

void loop() {

 lcd.setCursor(0,1);
 b1=digitalRead(A0);
 b2=digitalRead(A1);

 if(b1==0&&b2==0)
 {
  digitalWrite(m1p,HIGH);
    digitalWrite(m1n,LOW);
  digitalWrite(m2p,HIGH);
  digitalWrite(m2n,LOW);
  lcd.print("both clockwise");
 }
 else if(b1==1&&b2==0)
 {
  digitalWrite(m1p,LOW);
    digitalWrite(m1n,HIGH);
  digitalWrite(m2p,HIGH);
  digitalWrite(m2n,LOW);
    lcd.print("motor 1 anitclockwise -  motor 2 clockwise");

 } 
 else if(b1==0&&b2==1)
 {
  digitalWrite(m1p,HIGH);
    digitalWrite(m1n,LOW);
  digitalWrite(m2p,LOW);
  digitalWrite(m2n,HIGH);
    lcd.print("motor 2 anitclockwise -  motor 1 clockwise");

 } 
 else if(b1==1&&b2==1)
 {
  digitalWrite(m1p,LOW);
    digitalWrite(m1n,HIGH);
  digitalWrite(m2p,LOW);
  digitalWrite(m2n,HIGH);
    lcd.print("both anticlockwise");

 }

 //lcd.autoscroll();
 delay(1000);
  // put your main code here, to run repeatedly:

}
