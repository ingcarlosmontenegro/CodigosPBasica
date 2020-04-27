#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
	float n;
    cout << "Deme numero: ";
    cin >> n;
    
    if (n == trunc (n)){
        cout << "el numero no tiene parte fraccionaria";
    }
    else {
        cout << "Numero con parte fraccionaria";
    }
}
