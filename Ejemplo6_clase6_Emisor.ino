
int valor;  // declaracion de constantes

void setup()
{ //iniciacion de puertos serial
  Serial3.begin(9600);
  Serial.begin(9600);
}

void loop()
{

    valor = analogRead(0);    //lee datos sensor
    Serial.println(valor);
    Serial3.println(valor);    //los imprime en el serial 0
    delay(500);
}







