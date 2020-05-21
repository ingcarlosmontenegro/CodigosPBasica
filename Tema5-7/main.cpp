#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    do{
        
        cout << "'Introduzca un número de identificiación: ";
        int numId;
        cin >> numId;
        if (numId < 1000 | numId > 1999){
            cout << "Numero no valido" << endl;
            cout << "Por favor, introduzca otro numero: ";
        }
        else{
            break;
        }
    }while (true);
}

