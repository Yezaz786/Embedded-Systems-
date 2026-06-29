#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int count=0;

void display();
void push_button();
void sensor();
void lights();

void display(){
  lcd.init();
  lcd.backlight();
  lcd.clear();
  
  
  pinMode(13,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(8,INPUT);
  pinMode(4,INPUT);
  
}

void push_button(){
    if(digitalRead(4)==HIGH){
     
    if(digitalRead(4)==HIGH){
    count++;
     
  }
}
}


void sensor(){
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  digitalWrite(9,LOW);
  
  float time = pulseIn(8,HIGH);
  float distance = (time*0.034)/2;
  Serial.println(distance);
  
  if(count==1){
    if(distance>100){
     digitalWrite(3,LOW);
     digitalWrite(2,LOW);
     digitalWrite(5,LOW);
     digitalWrite(13,LOW);
      lcd.setCursor(0,0);
     lcd.print("DISTANCE:");
     lcd.print(distance);
     delay(100);
     lcd.setCursor(0,1);
     lcd.print("SAFE ZONE");
     
  }
  else {
    digitalWrite(3,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(13,HIGH);
    lcd.setCursor(0,0);
    lcd.print("DISTANCE:");
    lcd.print(distance);
    lcd.setCursor(0,1);
    lcd.print("DANGER ZONE");
}
  }
  else if(count==2){
    lcd.clear();
    count=0;
  }
}

  
  void setup(){
    Serial.begin(9600);
    display();
    
  }
  void loop(){
    push_button();
    sensor();
    delay(200);
    
  }