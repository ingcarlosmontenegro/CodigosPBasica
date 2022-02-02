#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int const N = 5;     // N es el tamaño máximo del histograma
  int const MAXDATOS = 100; // MAXDATOS es el tamaño máximo de la colección;
  int i,j,totalDatos,d,f;
  int coleccion [MAXDATOS];
  int histograma [N];
  cout<<("Por favor digite el número de datos de la colección inferior o igual a 100");
  cout<<endl;
  cin>>(totalDatos);
  i=0;
  while (i<totalDatos){
    cout<<"Por favor digite el dato : ";
    cout<<(i+1);
    cout<<endl;
    cin>>(coleccion[i]);
    i= i+1;
  }
  
  i=0;
  while (i<N) { // inicializa las frecuencias en 0. Paso 3.1
    histograma[i]= 0;
    i= i+1;
  }

  i=0;
  while (i<totalDatos) { // este ciclo calcula las frecuencias. Paso 3.2
    d = coleccion[i]-1;
    histograma[d]= histograma[d]+1;
    i= i+1;
  }

  i=0;
  while (i<N) { // este ciclo recorre el histograma
    cout<<(i+1);
    cout<<(": ");
    f= histograma[i] ; // f guarda la frecuencia de dato i+1
    j= 0;
    while(j<f) { // este ciclo escribe f asteriscos
      cout<< ('*');
      j= j+1;
    }

  cout<<endl;
  i= i+1;
  }
    return EXIT_SUCCESS;
}