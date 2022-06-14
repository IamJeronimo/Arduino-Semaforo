// C++ code
//
/*
Autor: Lucas Jeronimo da Silva
E-mail: l.jeronimo@outlook.com.br
Manutenção: Lucas Jeronimo da Silva

#################################### OBJETIVO ###########################################################
- Este programa tem como objetivo a criação de um semaforo, acendendo e apagando os respectivos leds.

#################################### HISTORICO ##########################################################   

	v1.0 2021-08-28, Lucas Jeronimo:
		- Versão inicial, piscando leds amarelos e acendendo respectivamente os leds vermelho e verde 
		das ruas 1 e 2.
*/

//Diretivas de compilador:
#define ledVm 	13
#define ledAm	12
#define ledVrd	8

#define ledVm2	7
#define ledAm2	4
#define ledVrd2	2

#define ON  HIGH
#define OFF LOW

//Variaveis:
int tempo = 2000;
int tempoAmOn= 750;
int tempoAmOff= 1000;
int estadoRua=1;

// Function setup "Inicializando os leds"
void setup(){
  pinMode(ledVm, OUTPUT);
  pinMode(ledAm, OUTPUT);
  pinMode(ledVrd, OUTPUT);
  pinMode(ledVm2, OUTPUT);
  pinMode(ledAm2, OUTPUT);
  pinMode(ledVrd2, OUTPUT);
}

// Function apagaSem => Apagando todos os leds
void apagaSem(){
  digitalWrite(ledVm, OFF);
  digitalWrite(ledVrd2, OFF);
  digitalWrite(ledAm, OFF);
  digitalWrite(ledVrd, OFF);
  digitalWrite(ledAm2, OFF);
  digitalWrite(ledVm2, OFF);  
}

// Function piscaAM => Pisca o led amarelo em um intervalo de ON(250ms) OFF(1s)
void piscaAm(){
	digitalWrite(ledAm,ON);
  	digitalWrite(ledAm2,ON);
  	delay(tempoAmOn);
	digitalWrite(ledAm,OFF);
  	digitalWrite(ledAm2,OFF);
  	delay(tempoAmOff);
  
  	digitalWrite(ledAm,ON);
  	digitalWrite(ledAm2,ON);
  	delay(tempoAmOn);
	digitalWrite(ledAm,OFF);
  	digitalWrite(ledAm2,OFF);
  	delay(tempoAmOff);
  
  	digitalWrite(ledAm,ON);
  	digitalWrite(ledAm2,ON);
  	delay(tempoAmOn);
	digitalWrite(ledAm,OFF);
  	digitalWrite(ledAm2,OFF);
  	delay(tempoAmOff);
  
  	digitalWrite(ledAm,ON);
  	digitalWrite(ledAm2,ON);
  	delay(tempoAmOn);
	digitalWrite(ledAm,OFF);
  	digitalWrite(ledAm2,OFF);
  	delay(tempoAmOff);
  
  	digitalWrite(ledAm,ON);
  	digitalWrite(ledAm2,ON);
  	delay(tempoAmOn);
	digitalWrite(ledAm,OFF);
  	digitalWrite(ledAm2,OFF);
  	delay(tempoAmOff);
  	
  	
}

// Function loop "'main'" do programa entra em um loop para o funcionamento do semaforo
void loop()
{
	switch(estadoRua){
		case 1:
      	apagaSem();
		digitalWrite(ledVm,ON);
      	digitalWrite(ledVrd2,ON);
      	delay(tempo);
      	piscaAm();
      
      	case 2:
      	apagaSem();
      	digitalWrite(ledVrd, ON);
      	digitalWrite(ledVm2, ON);
        delay(tempo);
      	piscaAm(); 	
    }
}