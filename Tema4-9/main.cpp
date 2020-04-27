#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int Dia;
    cout << "Ingrese el Número del Día: ";
    cin>> Dia;
    
    switch (Dia){
        case 1: 
            cout << "Lunes" << "\n";
            break;
        case 2: 
            cout << "Martes" << "\n";
            break;
        case 3: 
            cout << "Miercoles" << "\n";
            break;
        case 4: 
            cout << "Jueves" << "\n";
            break;
        case 5: 
            cout << "Viernes" << "\n";
            break;
        case 6: 
            cout << "Sabado" << "\n";
            break;
        case 7: 
            cout << "Domingo" << "\n";
            break;
        default:
            cout << "Error" << "\n";
        }
	return 0;
}
