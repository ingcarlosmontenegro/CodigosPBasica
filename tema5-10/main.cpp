#include <iostream>

using namespace std; 

int main()
{
    // datos locales...
    const int num_lineas = 5;
    const char blanco = ' ';
    const char asterisco = '*';
    // comienzo de una nueva línea
    cout << endl;
    // dibujar cada línea: bucle externo
    for(int fila = 1; fila <= num_lineas; fila++) {
        // imprimir espacios en blanco: primer bucle interno
        for(int blancos = (num_lineas-fila); blancos > 0; blancos--)
            cout << blanco;
        for(int cuenta_as = 1; cuenta_as < 2 * fila; cuenta_as++)
            cout << asterisco;
        // terminar línea
        cout << endl;
    } // fin del bucle externo
    return 0;
}