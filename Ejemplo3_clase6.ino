int led = 22;          			// led en el pin 22
int valor, cen, dec, uni;


void setup()
{
  pinMode(led, OUTPUT);     		// configura el led1 como salida
  Serial.begin(9600);             		//Define la velocidad de la comunicación a 9600 baudios
  Serial.println("Digite el tiempo de tres dígitos");
  valor = 100;                      		// Define valor 100 por defecto
}

void loop()
{
  digitalWrite(led, HIGH); 		// activa el led
  delay(valor);
  digitalWrite(led, LOW); 		// desactiva el led
  delay(valor);
}
void serialEvent()        		//Revisa que al menos se haya recibido un carácter en el puerto serie
{
  cen = Serial.read();  		//Lee centenas
  dec = Serial.read();  	 	//Lee Decenas
  uni = Serial.read(); 	 	//Lee unidades
  cen = cen - 48;		 	//Convierte el carácter centenas a numero
  dec = dec - 48;		 	//Convierte el carácter decenas a numero
  uni = uni - 48;		 	//Convierte el carácter unidades a numero
  valor = cen * 100 + dec * 10 + uni;	 //agrupa los caracteres recibidos en velocidad (dato)

}


