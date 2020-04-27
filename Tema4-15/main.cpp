#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	float A, B ,C, mayor;
    cout << "ingrese 3 valores separados por enter:";
    cin >> A;
    cin >> B;
    cin >> C;
    
    if (A > B){
        if (A > C){
            mayor = A;
        }
        else {
            mayor = C;
        }
    }
    else{
        if (B > C){
            mayor = B;
        }
        else{
            mayor = C;
        }
    }
    cout << "Mayor: " << mayor; 
	return 0;
}
