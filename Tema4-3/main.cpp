#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    float a, b, x;
    
    cout<< "ingrese a:";
    cin>> a;
    cout<< "ingrese b:";
    cin>> b;
    
    if (a != 0){
        x = -b/a;
        cout<< "x= " << x;
        }
    else{
        if (b != 0){
            cout << "Solución imposible";
        }
        else{
                cout << "Solución indeterminada";
            }
        }
    return 0;
}
