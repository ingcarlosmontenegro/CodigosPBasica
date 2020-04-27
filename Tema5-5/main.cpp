#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int potencia = 1;
    do {
        cout << potencia << "\n";
        potencia *= 2;
    }
    while (potencia < 1000);
}
