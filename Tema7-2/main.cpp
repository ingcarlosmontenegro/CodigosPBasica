#include <iostream>

using namespace std;

void funcion01();void funcion02(int a);  //declaraciíon de funciones

int funcion03(); int funcion04(int a, int b);int funcion04(int a);

void funcionif(int a); void funcionswitch(char a);

int main(int argc, char** argv) {

	funcionif(17);
	funcionswitch('P');

	cout << "miremos el primero: " << argc << "\n";
	cout << "miremos el segundo: " << argv[0] << "\n";
	cout << "miremos el segundo: " << argv[1] <<"\n\n\n";
	
	funcion01();
	funcion02(12);
	int a = funcion03();                         
	cout << "mensaje del main: " << a << "\n";
	int b = funcion04(a,3); 
	cout << "mensaje del main: " << b << "\n";
	b = funcion04(a); 
	cout << "mensaje del main: " << b <<  "\n";

	return 0;
}

void funcionswitch(char a){

	switch(a){
		case 'I': cout << "Insuficiente\n";break;
		case 'A': cout << "Aceptable\n";break;
		case 'E': cout << "Excelente\n";break;
		default: cout << "No Aplica\n";
	}
}

void funcionif(int edad){
    if(edad < 18){
		cout << "Usted no tiene cedula!";
	}
    if (edad < 18){
		cout << "Usted no tiene cedula!";
	} else {
		cout << "Usted tiene cedula!";
	}
    
    
    if(edad < 18){
		cout << ("Menor de Edad!");
	} else if(edad < 28){
		cout << ("Estas cerca del 3er piso");
	} else if(edad < 38){
		cout << ("pasaste el 3er piso");
	} else if(edad < 48){
		cout << ("has madurado!");
	} else if(edad < 58){
		cout << ("A conocer el mundo!");
	} else {
		cout << ("viviendo la segunda infancia!");
	}
}

void funcion01 (){ // funcion que no retorna nada y no recibe nada
	cout << ("mensaje de la funcion01 \n");}

void funcion02 (int a){ // funcion que no retorna nada y recibe parametros
	int b = a * 3;
	cout << "mensaje de la funcion02: " << b << "\n";}
    
int funcion03 (){ // funcion que retorna variable y no recibe nada
	return 666;}

int funcion04 (int a, int b){ // funcion que retorna variable y recibe parametros
	cout << ("aqui01\n");
	return a / b;}
    
int funcion04 (int a){ // funcion que retorna variable y recibe un parametro
	cout << ("aqui02\n");
	return a / 6;}