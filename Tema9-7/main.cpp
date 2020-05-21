#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
    string s1 = "hola" ; 
    string s2 = "mundo"; 
    string s = s1 + ", " + s2; 
    cout << s << endl ; 
    
    s = "hola" ; 
    string car;
    car = s[3]; 
    s[0] = 'H'; 
    cout << s << ":" << car << endl ; 
    
    char cad[] = "hola"; 
	s = cad ; 
    s = s + ", mundo"; 
    cout << s << endl;
    
    cad[6]; 
    s = "mundo"; 
	// OJO: debe haber sitio suficiente en ’cad’ de -> s a cad 
	strcpy(cad, s.c_str());
    cout << cad << endl;

    int n=100; 
    stringstream ss; 
    ss << n; 
    // Tambien se pueden concatenar mas cosas, por ejemplo:
    // ss << "El numero es: " << n << endl; 
    string numero=ss.str();
    cout << numero << endl;

    numero="100"; 
    n=atoi(numero.c_str());
    cout << n+1 << endl;
}
