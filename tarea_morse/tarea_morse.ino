int patitaLed = 9;

void setup() {
  //patita 9 se comporta como
 pinMode(patitaLed,OUTPUT);
}

void loop() {
  //para m como son 2 rayas, llamo 2 veces a funcion raya
raya();
raya();
interletra();

//para a llamp función punto y función raya
punto();
raya();
interletra();

//para p llamo función punto,2 veces función raya y función punto
punto();
raya();
raya();
punto();
interletra();

//para i llamo 2veces función punto
punto();
punto(); 

//espacio para distinguir el comienzo del loop
delay(2000); 

}
void interletra(){
delay(300);
}
void raya(){
 // la raya:
digitalWrite(patitaLed, HIGH);  
delay(1000);//delay se coloca
digitalWrite(patitaLed, LOW);  
delay(500);

}
 
void punto(){

//funcion va escribir un punto en mi led)
digitalWrite(patitaLed, HIGH);  
delay(100);//delay se coloca en milisegundos
digitalWrite(patitaLed, LOW);  
delay(500);

}
