#include <stdio.h>
//#include <iostream>
using namespace std;

/* ESTE PROGRAMA LO REALICE EN CLASE
DE FUNDAMENTOS DE PROGRAMACION
*/

int main(int argc, char** argv) {
	int edad; // al no inicializar la varibale toma el valor de la memoria
	char Nombre[20]; // declaracion = "Carlos";
/*
	cout<<"Cual es tu nombre: ";
	cin>>Nombre;
	cout<<"Hola "<<Nombre<<"!, tienes "<< edad<<" años /a"<<endl;
*/

	printf("Cual es tu nombre: ");
	scanf("%s",Nombre);
	printf("Cual es tu edad: ");
	scanf("%d",&edad);
	printf("Hola %s!, tienes %d años",Nombre, edad);

	return 0;
}