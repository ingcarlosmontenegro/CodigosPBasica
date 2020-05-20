#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	string a="Hay una taza en esta cocina con tazas";
    string b="taza";
    // Longitud de a
    unsigned int tam = a.length();
    // Buscamos la primera palabra ’taza’
    unsigned int encontrado=a.find(b);
    /* string::npos es una constante, que 
    representa un no-posición. Es devuelto por el método find 
    cuando el patrón no se encontró.*/
    if (encontrado!=string::npos)
        cout << "primera ’taza’ en: " << encontrado << endl;
    else cout << "palabra ’taza’ no encontrada";
    // Buscamos la segunda palabra ’taza’
    encontrado=a.find("taza",encontrado+b.length());
    if (encontrado!=string::npos)
        cout << "segunda ’taza’ en: " << encontrado << endl;
    else cout << "palabra ’taza’ no encontrada";
    // Sustituimos la primera ’taza’ por ’botella’
    a.replace(a.find(b),b.length(),"botella");
    cout << a << endl;
}
