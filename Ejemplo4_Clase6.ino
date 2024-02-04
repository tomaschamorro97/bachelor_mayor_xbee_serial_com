
int sw1 = 37;          	// sw1 en el pin 37 
int sw2 = 36;          	// sw2 en el pin 36
int led = 22;          	// led en el pin 22

int dato;
void setup()
{
   Serial1.begin(9600);
   Serial.begin(9600);
   pinMode(sw1, INPUT);     	// configura el sw1 como entrada
   pinMode(sw2, INPUT);     	// configura el sw2 como entrada
   pinMode(led, OUTPUT);     	// configura el led como salida
}

void loop()
{
  if(Serial1.available()>0)
   {
    dato=Serial1.read();
    if(dato=='1')
      {
        digitalWrite(led, HIGH); 	// activa el led
        Serial.println("Led encendido");
      }
      if(dato=='0')
      {
        digitalWrite(led, LOW); 	// desactiva el led
        Serial.println("Led apagado");
      }
   }  
     
    if(digitalRead(sw1)==HIGH)
    {
      Serial1.print('1');
    }
    
    if(digitalRead(sw2)==HIGH)
    {
      Serial1.print('0');
    }
}
