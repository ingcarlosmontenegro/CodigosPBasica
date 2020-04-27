#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int I, N, S;
    S=0;
    cout << "ingrese el valor hasta donde realizar la suma";
    cin >> N;
     for (I=1; I<= N; I++){
         S = S+I;
     }
    cout << "La suma de los " << N << " primeros digistos es: " << S << endl; 
	return 0;
}