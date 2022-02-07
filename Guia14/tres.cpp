#include<iostream>

using namespace std;

int factorial (int n){ 
  if (n <= 1){
    return 1;
  }
  else {
    return factorial(n-1)*n;
  }
}

int main (int argv, char ** argc){
  cout << factorial(5);
}
