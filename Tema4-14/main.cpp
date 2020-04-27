#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    cout << "Digite un numero + de varios digitos: " << "\n";
    cin >> n;
    
    switch (n){
        case 0 ... 9:{
            cout << "Tiene 1 Digito " << "\n";
        break;}
        case 10 ... 99:{
            cout << "Tiene 2 Digito " << "\n";
        break;}
        case 100 ... 999:{
            cout << "Tiene 3 Digito " << "\n";
        break;}
        default:
            cout << "Tidne mas de 3 Digitos " << "\n";
    }
	return 0;
}
