#include <iostream>
#include <time.h>

using namespace std;

int main() {               
  srand(1);
  int randa = rand();
  int na, n, res;
  na = n = 5;
  long tot = 0;

  Evalua:
   cout << "n= " << n << " ";
  switch (n) {
    case 0:
      cout << "Suspenso! fuera..." << endl;
      goto Termina;
    case 1:
      cout << "Ruina inminente....peligro...!" << endl;
      goto Mueve;
    case 2:
      cout << "Estas peligrosamente bajo!" << endl;
      goto Mueve;
    case 3:
      cout << "Deberias mejorar" << endl;
      goto Mueve;
    case 4:
      cout << "Sabes hacerlo mejor" << endl;
      goto Mueve;
    case 5:
      cout << "Estas en la media" << endl;
      goto Mueve;
    case 6:
      cout << "No es gran cosa" << endl;
      goto Mueve;
    case 7:
      cout << "No esta mal..." << endl;
      goto Mueve;
    case 8:
      cout << "Francamente bien" << endl;
      goto Mueve;
    case 9:
      cout << "Estas soberbio" << endl;
      goto Mueve;
    case 10:
      cout << "Has ganado con honores Felicidades!!" << endl;
      goto Termina;
  }

  Compara:
  if (na = n)
    cout << "Te mantienes" << endl;
  else if (na < n)
    cout << "Desciendes" << endl;
  else if (na > n)
    cout << "Mejoras" << endl;
  na = n;
    goto Evalua;

  Mueve:
  res = rand();
  if (res < randa) --n;
  else if (res > randa) ++n;
  randa = res;
  ++tot;
  srand(clock());
  goto Compara;

  Termina:
  cout << "Has necesitado " << tot << " oportunidades" << endl;
  system("PAUSE");
  return EXIT_SUCCESS;
}