#include<iostream>

using namespace std;

float h (float a, float b){
  return a*a+2*b;
}

int main (int argv, char ** argc){
  cout << h(4.5, 3.3);
}