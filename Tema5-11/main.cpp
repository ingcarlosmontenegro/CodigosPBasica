#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    int filas, columnas;
    char elCar;
    cout << "¿Cuántas filas?";
    cin >> filas;
    cout << "¿Cuántas columnas?";
    cin >> columnas;
    cout << "¿Qué carácter?";
    cin >> elCar;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++)
            cout << elCar;
        cout << "\n";
    }
    return 0;
}
