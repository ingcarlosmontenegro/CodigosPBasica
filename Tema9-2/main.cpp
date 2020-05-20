#include <iostream>
#include <string.h>

using namespace std;

char completo [80];
char nombre[32] = "Carlos";
char apellidos [32] = "Montenegro Marin";

int main()
{
  /* Construye el nombre completo */
  strcpy ( completo, nombre );	/* completo <- "Pedro" */
  strcat ( completo, " ");	  	/* completo <- "Pedro " */
  strcat ( completo, apellidos );	/* completo <- "Pedro Medario Arenas" */

  cout << "El nombre completo es: "<< completo << endl;
  return 0;
} 