#include <cstdlib>
#include <iostream>

using namespace std;

void intercambio (int &x, int &y){
     int aux;
     aux = x;
     x=y;
     y = aux;
}

void ordenar (int n, int A[1000]){
     int i, j;
     
     for (i=0; i<=n-2; i++){
         for (j=i+1; j<= n-1; j++){
          if (A[i] > A[j]){
                   intercambio (A[i], A[j]);
          }
         }
     }
}

void imprimir_ascendente (int n, int A[1000]){
     int i;
     
     for (i=0; i<=n-1; i++){
         cout<<A[i]<< " ";
     }
         cout<<"\n";
}

void imprimir_descendente (int n, int A[1000]){
     int i;
     
     for (i=0; i<=n-1; i++){
         cout<<A[n-1-i]<< " ";
     }
         cout<<"\n";
}

void llenar_arreglo (int &n, int A[1000]){
     int i;
     
     for (i=0; i<=n-1; i++){
         cout<<i << ": ";
         cin>>A[i];
     }
}

int main(int argc, char *argv[])
{
    int datos = 0;
    int arreglo [1000];
    
    cout<< "ingresar el número de datos:";
    cin>>datos;
    
    llenar_arreglo (datos, arreglo);
    ordenar(datos, arreglo);
    imprimir_ascendente(datos, arreglo);
    imprimir_descendente(datos, arreglo);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
