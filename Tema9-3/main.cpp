#include <iostream>
#include <stdio.h>

using namespace std; 

int main ()
{
	char nombre [1000];
    char apellido [1000];
	printf ( "¿Cuál es su nombre para captura en scanf? " );
    // captura con scanf
    scanf ( "%s", nombre);
    printf ( "¿Cuál es su apellido para captura en cin? " );
    // captura con cin
	cin >> apellido;
	printf ( "Parece que su nombre completo es %s %s\n", nombre, apellido);
    cout << "¿Cuál es su nombre y apellido para captura con cin.getline ? \n";
    // Para ignorar descartar el salto de línea antes de llamar a getline
    cin.ignore();
    // Se lee toda la linea incluidos los espacios en blanco.
    cin.getline (nombre, 500);
    cout << "Parece que su nombre completo es " << nombre <<"\n";
    return 0;
}
