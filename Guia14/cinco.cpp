
#include <iostream>

using namespace std;

int suma_rara(int n, int m){
  if (n	>	0	& m	<=0){
    return n;
  }
  else if (n	<=0	&	0	<=m){
    return m;
  }
  else{
    return suma_rara(n-2,m-3)+suma_rara(m-2,n-3)+m+n;
  }
}

int main (int argv, char ** argc){
  cout << suma_rara(7,9);
}