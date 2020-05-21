#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char **argv)
{
    char cad[] = "adios";
    cout << strlen(cad) << endl; // Imprime 5
    
    char otra[] = "adeu";
    cout << strcmp(cad,otra) << " " << strcmp(otra,cad)
    << " " << strcmp(cad,cad) << endl; // Imprime -1 -1 0
    
    char cad2[10];
    strcpy(cad2,"hola"); // cabe, son 4 + \0 = 5 caracteres
    cout << cad2<< endl;

    char cad3[10];
    cout << strncmp(cad,otra,3) << " " << strncmp(otra,cad,3)
    << " " << strncmp(cad,cad,3) << endl; // Imprime -1 -1 0
    strncpy(cad3,"hola, mundo",4); // solo copia "hola"
    cad3[4] = '\n'; // se agrega espacio de linea al final.
    cout << cad3;
}