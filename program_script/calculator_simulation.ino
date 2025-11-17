#include <LiquidCrystal.h>
String prompt="Enter +,-,/ OR *";
String firstNum="Enter first num: ";
String secondNum="Enter second num: ";
String ans="Answer is ";
String addition="+";
String subtraction="-";
String multiplication="*";
String division="/";
float answer;
float fstNum;
float sndNum;
String arithOperand;
String seaterMsg="Up for Another?";
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int delayT=4000;
LiquidCrystal rizamaLCD(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
rizamaLCD.begin(16,2);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
rizamaLCD.setCursor(0,0);
rizamaLCD.print(prompt); 
while (Serial.available()==0);{
}
//if (arithOperand != addition && arithOperand != subtraction && arithOperand != multiplication && arithOperand != division){
//  Serial.println("Please fill in a valid arithmetic operand!");
//}
arithOperand=Serial.readString();
rizamaLCD.clear();

rizamaLCD.setCursor(0,0);
rizamaLCD.print(firstNum);
while (Serial.available()==0);{
}
fstNum=Serial.parseFloat();
rizamaLCD.clear();

rizamaLCD.setCursor(0,0);
rizamaLCD.print(secondNum);
while (Serial.available()==0);{
}
sndNum=Serial.parseFloat();
rizamaLCD.clear();
  
rizamaLCD.setCursor(0,0);
if (arithOperand==addition){
  answer=fstNum+sndNum;
}
if (arithOperand==subtraction){
  answer=fstNum-sndNum;
}
if (arithOperand==division){
  answer=fstNum/sndNum;
}
if (arithOperand==multiplication){
  answer=fstNum*sndNum;
}
rizamaLCD.clear();
rizamaLCD.setCursor(0,0);
rizamaLCD.print(ans);
rizamaLCD.print(answer);
rizamaLCD.setCursor(0,1);
rizamaLCD.print(seaterMsg);
delay(delayT);
rizamaLCD.clear();


}
