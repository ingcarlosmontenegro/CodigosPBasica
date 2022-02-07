#include <iostream>
#include <string.h>

#define N 30;

using namespace std;

int main (int argv, char ** arga){

char pal[31];
char respuesta[30];
int i, j;
bool siga;

printf("Por	favor	digite	una	palabra	de	máximo	30	letras \n");
cin.getline(pal,31);
i=0;
j=strlen(pal)-1;
siga = true;

while ((i<j) & (siga)){
  if (pal[i]==pal[j]){
    i++;
    j--;
  }
  else{
    siga = false;
  }
}

if (i<j){
  printf(" No es Palindromo");
}
else {
  printf("Palindromo");
}
}