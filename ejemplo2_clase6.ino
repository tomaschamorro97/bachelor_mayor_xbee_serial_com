
 int led1 = 22;          	// led1 en el pin 22 
 int led2 = 23;          	// led2 en el pin 23 
  char valor;
  
     
  void setup() 
   {  
     pinMode(led1, OUTPUT);     	// configura el led1 como salida
     pinMode(led2, OUTPUT);     	// configura el led2 como salida
     Serial.begin(9600);             //Define la velocidad de la comunicacion a 9600 baudios
     Serial.println(" 1 para encender el led2");
      Serial.println(" 0 para apagar el led2");
 
   }
   
   
    void loop()
      {
        digitalWrite(led1, HIGH); 		// activa el led1
        delay(1000);
        digitalWrite(led1, LOW); 		// desactiva el led1
        delay(1000);
      }
      
    void serialEvent()        //Revisa que al menos se haya recibido un caracter en el puerto serie
      { 
             valor=Serial.read();    
             if(valor=='1')           //si la tecla pulsada es el caracter 1
              {       
                    digitalWrite(led2, HIGH); 		// activa el led2
              } 
           if(valor=='0')           //si la tecla pulsada es el caracter 0
              {        
                  digitalWrite(led2, LOW); 		// desactiva el led2
              }
        }   
     
      
       
