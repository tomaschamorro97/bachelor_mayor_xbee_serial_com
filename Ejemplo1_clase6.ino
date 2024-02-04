
int led = 22;
int dato;


void setup()
  {
    pinMode(led,OUTPUT);
    Serial.begin(9600);
    
  }
void loop()
  {
    if (Serial.available()>0)
    {
      dato=Serial.read();
      if(dato=='1')
         {
           digitalWrite(led,HIGH);
         }
      if(dato=='2')
         {
          digitalWrite(led,LOW);
         } 
     }
  }

