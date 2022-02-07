#include<iostream>

using namespace std;

float minimo (float a, float b, float c){ 
  if(a<=b && a<=c){
    return a;
  }
  else if(b<=a && b<=c){
    return b;
  }
    else {
      return c;
    }
}

int main (int argv, char ** argc){
  cout << minimo(4.5, 3.3, 9.2);
}

	