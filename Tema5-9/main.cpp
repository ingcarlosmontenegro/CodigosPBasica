#include <iostream>
#include <iomanip> // para set w

using namespace std;

int main(int argc, char **argv)
{
    int Xultimo, Yultimo;
    cout << "ingrese el valor para Xultimo= ";
    cin >>Xultimo;
    cout << "ingrese el valor para Yultimo= ";
    cin >>Yultimo;
    cout << setw(2) << "Xultimo" << "   "
            << setw(2) << "Yultimo" << "   "
            << setw(3) << "Producto" << endl;
    for(int x = 1; x <= Xultimo; x++)
        for(int y = 1; y <= Yultimo; y++) {
            int producto = x * y;
            cout << setw(4) << x << setw(6) << " * "
            << setw(4) << y << setw(6) << " = "
            << setw(5) << producto << endl;
        }
}
