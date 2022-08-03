#define ENA 5
#define IN1 6
#define IN2 7
#define ENB 3
#define IN3 8
#define IN4 9
int sVal=0;
int speed=150;
void forward()
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  
}
void backward()
{
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
}
void turnLeft()
{
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void turnRight()
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
}
void incSpeed()
{
  speed=speed+10;
  if(speed>255)
    speed=255;
  analogWrite(ENA,speed);
  analogWrite(ENB,speed);
}
void stopMove(){
//  motor 1 
  digitalWrite(IN1,0);
  digitalWrite(IN2,0);
//  motor 2
  digitalWrite(IN3,0);
  digitalWrite(IN4,0);
}
void decSpeed()
{
  speed=speed-10;
  if(speed<50)
    speed=50;
  analogWrite(ENA,speed);
  analogWrite(ENB,speed);
}
void setup() {
 
  // put your setup code here, to run once:
  //Motor 1
  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);

   //Motor 2
  pinMode(ENB,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);


  analogWrite(ENA,speed);
  analogWrite(ENB,speed);
  
  Serial.begin(9600);
}

void loop() {
//  turnRight();
//  forward();
  // put your main code here, to run repeatedly:
  char ch = Serial.read();
  switch(ch)
  {
    case 'f':
      forward();
      break;
    case 'b':
      backward();
      break;
    case 'l':
      turnLeft();
      break;
    case 'r':
      turnRight();
      break;
    case 'i':
      incSpeed();
      break;
    case 'd':
      decSpeed();
      break;
    case 's':
      stopMove();   
  }
}