#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	// imprimir letras minúsculas del alfabeto
    char car = 'a';
    do
    {
        cout << car << ' ';
        car++;
    }while (car <= 'z');
}
