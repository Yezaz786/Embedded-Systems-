#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int a=4;
int b=3;
int c=7;
int d=6;
int e=5;
int f=11;
int g=13;

void lights();
void button();

void lights(){
  lcd.init();
  lcd.backlight();
  lcd.clear();
  
  pinMode(4,INPUT);
  pinMode(3,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
}
void button(){
  if(digitalRead(a)== HIGH){
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("MOTION DETECT");
    lcd.setCursor(0,1);
    lcd.print("ALERT");
    
     digitalWrite(c,HIGH);
     digitalWrite(d,HIGH);
     digitalWrite(e,HIGH);
     digitalWrite(f,HIGH);
    delay(1000);
    lcd.clear();
  }
  else{
     digitalWrite(b,LOW);
     digitalWrite(g,LOW);
     digitalWrite(c,LOW);
     digitalWrite(d,LOW);
     digitalWrite(e,LOW);
     lcd.print("NO MOVEMENT");
     delay(1000);
     lcd.clear();
  }
}
void setup(){
lights();
  
}
void loop(){
  button();
}
    
     
    
    