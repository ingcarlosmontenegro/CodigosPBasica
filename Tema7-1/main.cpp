#include <iostream>

using namespace std;

void funcion01();void funcion02(int a);  //declaraciíon de funciones

int funcion03(); int funcion04(int a, int b);int funcion04(int a);

void funcionif(int a); void funcionswitch(char a);

int main(int argc, char** argv) {

	funcionif(38);
	funcionswitch('P');

	printf("miremos el primero: %d\n",argc);
	printf("miremos el segundo: %s\n",argv[0]);
	printf("miremos el segundo: %s\n\n\n",argv[1]);
	
	funcion01();
	funcion02(12);
	int a = funcion03();                         
	printf("mensaje del main: %d\n",a);
  int b = funcion04(a,3); 
	printf("mensaje del main: %d\n",b);
  b = funcion04(a); 
	printf("mensaje del main: %d\n",b);
  
	return 0;
}

void funcionswitch(char a){

	switch(a){
		case 'I': printf("Insuficiente\n");break;
		case 'A': printf("Aceptable\n");break;
		case 'E': printf("Excelente\n");break;
		default: printf("No Aplica\n");
	}
}

void funcionif(int edad){
    if(edad < 18){
		printf("Usted no tiene cedula!");
	}
    if (edad < 18){
		printf("Usted no tiene cedula!");
	} else {
		printf("Usted tiene cedula!");
	}
    
    
    if(edad < 18){
		printf("Menor de Edad!");
	} else if(edad < 28){
		printf("Estas cerca del 3er piso");
	} else if(edad < 38){
		printf("pasaste el 3er piso");
	} else if(edad < 48){
		printf("has madurado!");
	} else if(edad < 58){
		printf("A conocer el mundo!");
	} else {
		printf("viviendo la segunda infancia!");
	}
}

void funcion01 (){ // funcion que no retorna nada y no recibe nada
	printf("mensaje de la funcion01 \n");}

void funcion02 (int a){ // funcion que no retorna nada y recibe parametros
	int b = a * 3;
	printf("mensaje de la funcion02: %d \n",b);}
    
int funcion03 (){ // funcion que retorna variable y no recibe nada
	return 666;}

int funcion04 (int a, int b){ // funcion que retorna variable y recibe parametros
	printf("aqui01\n");
	return a / b;}
    
int funcion04 (int a){ // funcion que retorna variable y recibe un parametro
	printf("aqui02\n");
	return a / 6;}