#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    string filename("nombre1.txt");
    vector<string> lines;
    string line;

    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "no se puede abrir el archivo '"
             << filename << "'" << endl;
        return EXIT_FAILURE;
    }

    while (getline(input_file, line)){
        lines.push_back(line);
    }

    for (const auto &i : lines)
        cout << i << endl;

    input_file.close();
    return EXIT_SUCCESS;
}

/*

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
   ifstream fe("nombre1.txt"); 

   // Leeremos mediante getline para leer toda la linea y lo guardanos en cadena
   //  si lo hiciéramos mediante el operador << sólo leeríamos 
   // parte de la cadena:
   fe.getline(cadena, 128);
      char cadena2[128];
      fe.getline(cadena2, 128);

    // Imprimimos lo que leimos.
   cout << cadena << endl;
      cout << cadena << endl;

   return 0;
}
*/