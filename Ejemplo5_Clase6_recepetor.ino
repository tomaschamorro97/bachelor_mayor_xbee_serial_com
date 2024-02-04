int dato;

void setup()
  {
    Serial1.begin(9600);
  }
void loop()
  {
    if (Serial1.available()>0)
    {
      dato=Serial1.read();
      if(dato=='v')
       {
         analogWrite(3,255);
         analogWrite(2,0);
         analogWrite(4,0);
       }
       if(dato=='r')
       {
         analogWrite(4,255);
         analogWrite(3,0);
         analogWrite(2,0);
       }
       if(dato=='a')
       {
         analogWrite(2,255);
         analogWrite(4,0);
         analogWrite(3,0);
       }
    }
  }  

