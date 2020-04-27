#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    string nombre;
    float horas, impuestos, tarifa, sbruto, sneto;
    
    cout << "ingrese nombre ";
    cin >> nombre;
    cout << "ingrese horas ";
    cin >> horas;
    cout << "ingrese tarifa hora ";
    cin >> tarifa;
    
    if (horas <= 35){
        sbruto = horas * tarifa;
    }
    else {
        sbruto = 35 * tarifa + (horas - 35) * 1.5 * tarifa;
    }
    
    if (sbruto <= 2000){
        impuestos = 0;
    } 
    else {
        if ((sbruto > 2000) & (sbruto <= 2220)){
            impuestos = (sbruto - 2000) * 0.20;
        }
        else {
            impuestos = (220 * 0.20) + (sbruto - 2220) * 0.30;
        }        
    }
    sneto = sbruto - impuestos;
    cout << nombre << " su salario bruto es: " << sbruto << " los impuestos son: "
    << impuestos << " y su salario neto es: "<< sneto;
}