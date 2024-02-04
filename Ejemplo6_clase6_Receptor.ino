
int valor;// declaracion de constantes

void setup()
{ //iniciacion de puertos serial
  Serial3.begin(9600);
  Serial.begin(9600);
}

void loop()

{
    if (Serial3.available() > 0 )
    { 
      valor=Serial3.parseInt();     //Lee el valor entero
      Serial3.flush();
      Serial.println(valor);
      
      
      
    }
}


