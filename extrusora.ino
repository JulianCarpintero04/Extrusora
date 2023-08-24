//Motor nema, controlador del sinfin
#define VELOCIDAD 1000
int steps = 2;
int direccion = 3;
int pasos = 200;

//Coolers
int fan = 12;

void setup() {                

  pinMode(steps, OUTPUT);      
  pinMode(pasos, OUTPUT); 

  pinMode(fan,OUTPUT);    
  
}

void loop() {
 digitalWrite(direccion, HIGH); // se prende el motor nema en una sola direccion de manera ininterrumpida
         

   for (int i = 0; i<pasos; i++)
   {
     digitalWrite(steps, HIGH);
     digitalWrite(steps, LOW);
     delayMicroseconds(VELOCIDAD);
   }
 
  //Se prenden los coolers
  digitalWrite(fan,HIGH); 
}


