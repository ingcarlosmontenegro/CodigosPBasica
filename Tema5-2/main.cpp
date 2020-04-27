#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int total=0;
    int n=0;
    int nota;
    int media;
    cout << "ingrese la nota: ";
    cin >> nota;
    while (nota != -99){
        total = total + nota;
        n = n+1;
        cout << "ingrese la nota: ";
        cin >> nota;
    }
    media = total / n;
    cout << "la media es:" << media << "\n";
	return 0;
}
