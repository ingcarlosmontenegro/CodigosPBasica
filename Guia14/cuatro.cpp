
#include <iostream>
using namespace std;

const string enunciado = "Este programa imprime la sucesion de fibonacci desde \
1 hasta N, \nsiendo este ultimo un numero ingresado por el usuario\n";

int fibonacci(int n){
  int valor;
  if (n==0 || n==1){
    return n;
  }
  else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}

int main() {
  unsigned long long lim;
  cout << enunciado << endl;
  cout << "Ingrese un numero para la sucesion de fibonacci: ";
  cin >> lim;
  for (int i=0; i<lim; i++)
    cout << fibonacci(i);
}
