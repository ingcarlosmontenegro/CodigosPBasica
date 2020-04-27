#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int num, digitoSig;
    
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "El numero inverso es: ";
    do{
        digitoSig = num % 10;
        cout << digitoSig;
        num = num / 10;
    }
    while (num > 0);
    cout << "\n";
}
