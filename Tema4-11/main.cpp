#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int numero;
    cout << "Ingresa un numero entero entre 1 y 10: ";
    cin >> numero;
    
    if (numero >= 1 & numero <= 10){
        switch (numero){
            case 1:
            case 3:
            case 5:
            case 7: 
            case 9:
                cout << "impar" << "\n";
                break;
            case 2:
            case 4:
            case 6:
            case 8: 
            case 10: {
                cout << "par" << "\n";   
                break;
            }
        }
    }
    else 
        cout <<"Numero Errado " << "\n";
}
