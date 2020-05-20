#include <iostream>

using namespace std; 

int main ()
{
	string nombre ;
    string apellido ;
	cout << "¿Cuál es su nombre para captura con cin >> ";
    // captura con cin 
    cin >> nombre;
    cout << ( "¿Cuál es su apellido para captura con getline (), puede ingresar espacios " );
    // Para ignorar descartar el salto de línea antes de llamar a getline
    cin.ignore();
    // captura con getline
	getline (cin, apellido);
	cout << "Parece que su nombre completo "<< nombre << " " << apellido << endl;
    return 0;
}