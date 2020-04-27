#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int ano;
    cout << "ingrese el año: ";
    cin >>ano;
    if ((ano%4 == 0) & (ano%100 != 0) | (ano%400 == 0)){
        cout << "El año " << ano << " es bisiesto";
    }
    else{
        cout << "El año " << ano << " NO es bisiesto";
    }
	return 0;
}
