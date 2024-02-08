int red=13;
int green=12;
int button = 4;
int bu =2;
int read =0;

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(button,INPUT);
  pinMode(bu,INPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  read = digitalRead(button);
  if (read==HIGH)
  {
    digitalWrite(red,HIGH);
  }
  else
  {
    digitalWrite(red,LOW);
  }
  delay(250);
  read = digitalRead(bu);
  if(read==HIGH)
  {
     digitalWrite(green,HIGH);
  }
  else
  {
     digitalWrite(green,LOW);
  }
  delay(250);
 
}