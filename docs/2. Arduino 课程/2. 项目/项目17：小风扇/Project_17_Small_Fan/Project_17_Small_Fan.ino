//**********************************************************************************
/*
Keyes 2021入门学习套件
Project 17
Small_Fan
http//www.keyes-robot.com
*/
int IN1=8;
int IN2=4;
int ENA=9;
void setup()
{
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(ENA,OUTPUT);
}
void loop()
{
//向前转（正转）
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
analogWrite(ENA,200);
delay(3000);
//延迟3秒
analogWrite(ENA,0);
delay(1000);
//向后转（反转）
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
analogWrite(ENA,100);
delay(3000);
//延时3秒
analogWrite(ENA,0);
delay(1000);
}
//********************************************************************************
