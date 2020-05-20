#include <iostream>
#include <fstream>

using namespace std;

int main() {
   char cadena[128];
   // Crea un archivo de salida para escribir
   ofstream fs("nombre.txt"); 

   // Enviamos una cadena al archivos de salida para que sea escrita
   cout << "Ingrese información a escribir:";
   cin.getline(cadena,128);
   fs << cadena << endl;
   // Cerramos el archivo, 
   // esto, para despues poder abrirlo para lectura:
   fs.close();

   // Abrimos un archivo de entrada para leerlo
   ifstream fe("nombre.txt"); 

   // Leeremos mediante getline para leer toda la linea y lo guardanos en cadena
   //  si lo hiciéramos mediante el operador << sólo leeríamos 
   // parte de la cadena:
   fe.getline(cadena, 128);

    // Imprimimos lo que leimos.
   cout << cadena << endl;

   return 0;
}
