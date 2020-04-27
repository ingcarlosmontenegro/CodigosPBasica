#include <iostream>

using namespace std;

int main()
{
	string nombre;
    int horas, precio_hora;
    
    cout<< "Ingrese su nombre";
    cin>> nombre;
    cout<< "Ingrese el numero de horas trabajadas";
    cin>> horas;
    cout<< "Ingrese el precio de la hora";
    cin>> precio_hora;
    
    int salario_bruto = horas * precio_hora;
    int impuestos = 0.20 * salario_bruto;
    int salario_neto = salario_bruto - impuestos;
    
    cout << nombre << " Salario Bruto= "<< salario_bruto << " Salario Neto= " << salario_neto << "\n";
	return 0;
}
