#include <iostream>
#include <fstream>

using namespace std;
 
int main() {
   char l;
   long i, lon;
   string cadena;
   
   //abre archivos con:
   //in: lectura
   //out: escritura
   //trunc: Crea un archivo, si existe uno con el mismo nombre lo borra
   //binary: Permite operaciones binarias
   fstream fich("prueba.dat", ios::in | 
      ios::out | ios::trunc | ios::binary);
   
   // flush:  sirve para vaciar el buffer de salida. para que no quede nada.
   fich << "abracadabra" << flush;
   
   //seekg va al final del fichero por el ios::end)
   fich.seekg(0, ios::end);
   // ver posicion para saber tamaño
    lon = fich.tellg();
    
  for(i = 0; i < lon; i++) {
      //seekg va al principio del fichero de lectura por el ios::beg y por el g de get
      fich.seekg(i, ios::beg);
      fich.get(l);
      if(l == 'a') {
          //seekp va a la posicion i del fichero de escritura por el p de put
         fich.seekp(i, ios::beg);
         // Alli escribe la letra e
         fich << 'e';
      }
   }
   
   cout << "Salida:" << endl;
   //seekg va al principio del fichero de lectura por el ios::beg y por el g de get
   fich.seekg(0, ios::beg);
   for(i = 0; i < lon; i++) {
       // obtiene cada caracter recorrido con el ciclo
      fich.get(l);
      cout << l;
   }
   
   cout << endl;
   fich.close();
   
   return 0;
}