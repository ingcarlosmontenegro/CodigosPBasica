#include <iostream>
#include <string>

using namespace std;

void leerCadena(string & cadena2){
 cout << "Introduce cadena numérica: ";
 cin >> cadena2;
}

unsigned potenciaDiez(unsigned exp){
 unsigned resultado=1;
 for(unsigned i = 1; i <= exp; i++){
 resultado = resultado * 10;
 }
 return resultado;
}

void transformar (string cadena2, unsigned& num2){
 num2 = 0;
 unsigned n;
 for(unsigned i= 0 ; i < cadena2.size(); i++){
  n = (int(cadena2[i]))-(int('0'));
  num2 = num2 + n * potenciaDiez(cadena2.size()-1-i);
 }
}


int main() {
 string cadena;
 unsigned num;
 leerCadena(cadena);
 transformar(cadena, num);
 cout << "El número con el que se corresponde es el: "<< num +1 ;
 return 0;
}