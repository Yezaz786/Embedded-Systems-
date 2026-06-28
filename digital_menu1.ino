void clear(){
  while(Serial.available()){
    Serial.read();
  }
}
void menu(){
  Serial.begin(9600);
  Serial.println("----WELCOME TO PHEONIX CAFE----");
  Serial.println("1.COFFEE");
  Serial.println("2.TEA");
  Serial.println("3.MILK");
  Serial.println("4.LASSI");
  Serial.println("5.COCONUT WATER");
  }
void coffee_type(){
  Serial.println("a.CAPPUCCINO");
  Serial.println("b.COLD COFFEE");
  Serial.println("c.AMERICANO");
  Serial.println("d.MOCHA");
  Serial.println("e.ESPRESSO");
  while(!Serial.available()){}
  char coffee_type=Serial.read();
  clear();
    switch(coffee_type){
  case 'a':
  Serial.println("CAPPUCCINO---YOUR ORDER SUCCESSFUL---");
  break;
  case 'b':
  Serial.println("COLD COFFEE---YOUR ORDER SUCCESSFUL---");
  break;
  case 'c':
  Serial.println("AMERICANO---YOUR ORDER SUCCESSFUL---");
  break;
  case 'd':
  Serial.println("MOCHA---YOUR ORDER SUCCESSFUL---");
  break;
  case 'e':
  Serial.println("ESPRESSO---YOUR ORDER SUCCESSFUL---");
  break;
}
  }
  
void tea_type(){
  Serial.println("a.BLACK TEA");
  Serial.println("b.GREEN TEA");
  Serial.println("c.WHITE TEA");
  Serial.println("d.YELLOW TEA");
  Serial.println("e.RED TEA");
  while(!Serial.available()){}
  char tea_type=Serial.read();
  clear();
    switch(tea_type){
  case 'a':
  Serial.println("BLACK TEA---YOUR ORDER SUCCESSFUL---");
  break;
  case 'b':
  Serial.println("GREEN TEA---YOUR ORDER SUCCESSFUL---");
  break;
  case 'c':
  Serial.println("WHITE TEA---YOUR ORDER SUCCESSFUL---");
  break;
  case 'd':
  Serial.println("YELLOW TEA---YOUR ORDER SUCCESSFUL---");
  break;
  case 'e':
  Serial.println("RED TEA---YOUR ORDER SUCCESSFUL---");
  break;
}
}

void milk_type(){
  Serial.println("a.COW MILK");
  Serial.println("b.BUFFALO MILK");
  Serial.println("c.CAMEL MILK");
  Serial.println("d.GOAT MILK");
  Serial.println("e.DONKEY MILK");
  while(!Serial.available()){}
  char milk_type=Serial.read();
  clear();
  switch(milk_type){
  case 'a':
  Serial.print("COW MILK---YOUR ORDER SUCCESSFUL---");
  break;
  case 'b':
  Serial.print("BUFFALO MILK---YOUR ORDER SUCCESSFUL---");
  break;
  case 'c':
  Serial.println("CAMEL MILK---YOUR ORDER SUCCESSFUL---");
  break;
  case 'd':
  Serial.println("GOAT MILK---YOUR ORDER SUCCESSFUL---");
  break;
  case 'e':
  Serial.println("DONKEY MILK---YOUR ORDER SUCCESSFUL---");
  break;
}
}
    
void lassi_type(){
  Serial.println("a.MANGO LASSI");
  Serial.println("b.SWEET LASSSI");
  Serial.println("c.MINT LASSI");
  Serial.println("d.ROSE LASSI");
  Serial.println("e.BANANA LASSI");
  while(!Serial.available()){}
  char lassi_type=Serial.read();
  clear();
  switch(lassi_type){
  case 'a':
  Serial.println("MANGO LASSI---YOUR ORDER SUCCESSFUL---");
  break;
  case 'b':
  Serial.println("SWEET LASSSI---YOUR ORDER SUCCESSFUL---");
  break;
  case 'c':
  Serial.println("MINT LASSI---YOUR ORDER SUCCESSFUL---");
  break;
  case 'd':
  Serial.println("ROSE LASSI---YOUR ORDER SUCCESSFUL---");
  break;
  case 'e':
  Serial.println("BANANA LASSI---YOUR ORDER SUCCESSFUL---");
  break;
}
}
  
void coconutwater_type(){
  Serial.println("a.ANDHRA COCONUT WATER");
  Serial.println("b.KERALA COCONUT WATER");
  Serial.println("c.KASHMIR COCOCNUT WATER");
  Serial.println("d.TELANGANA COCONUT WATER");
  Serial.println("e.SIMLA COCONUT WATER");
  while(!Serial.available()){}
  char coconutwater_type=Serial.read();
  clear();
  switch(coconutwater_type){
  case 'a':
  Serial.println("ANDHRA COCONUT WATER---YOUR ORDER SUCCESSFUL---");
  break;
  case 'b':
  Serial.println("KERALA COCONUT WATER---YOUR ORDER SUCCESSFUL---");
  break;
  case 'c':
  Serial.println("KASHMIR COCOCNUT WATER---YOUR ORDER SUCCESSFUL---");
  break;
  case 'd':
  Serial.println("TELANGANA COCONUT WATER---YOUR ORDER SUCCESSFUL---");
  break;
  case 'e':
  Serial.println("SIMLA COCONUT WATER---YOUR ORDER SUCCESSFUL---");
  break;
}
}
  void setup(){
    Serial.begin(9600);
    Serial.println("----WELCOME TO PHEONIX CAFE----");
    Serial.println("1.COFFEE");
    Serial.println("2.TEA");
    Serial.println("3.MILK");
    Serial.println("4.LASSI");
    Serial.println("5.COCONUT WATER");
  }
  void loop(){
    if(Serial.available()>0){
      char orders=Serial.read();
    switch(orders){
  case '1':
  Serial.println("HELLO SIR/MEDAM");
  Serial.println("PLEASE SELECT COFFEE TYPE");
  coffee_type();
  break;
  case '2':
  Serial.println("HELLO SIR/MEDAM");
  Serial.println("PLEASE SELECT TEA TYPE");
  tea_type();
  break;
  case '3':
  Serial.println("HELLO SIR/MEDAM");
  Serial.println("PLEASE SELECT MILK TYPE");
  milk_type();
  break;
  case '4':
  Serial.println("HELLO SIR MEDAM");
  Serial.println("PLEASE SELECT LASSI TYPE");
  lassi_type();
  break;
  case '5':
  Serial.println("HELLO SIR/MEDAM");
  Serial.println("PLEASE SELECT COCONUT WATER TYPE");
  coconutwater_type();
  break;
  default:
  Serial.println("invalid type please select another choice");
  }
      delay(2000);
   Serial.print("THANK YOU VISIT AGAIN");
   delay(5000);
   menu();
   
   
    }
   
  }

      

    
  

