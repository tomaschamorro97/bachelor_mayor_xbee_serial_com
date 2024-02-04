int dato;

void setup()
  {
    Serial.begin(9600);
    Serial1.begin(9600);
    Serial.print("Comenzamos");
  }
void loop()
  {
    if (Serial.available()>0)
    {
      dato=Serial.read();
      if(dato=='r')
       {
         Serial1.print('r');
       }
       if(dato=='v')
       {
         Serial1.print('v');
       }
       if(dato=='a')
       {
         Serial1.print('a');
       }
    }
  }  

