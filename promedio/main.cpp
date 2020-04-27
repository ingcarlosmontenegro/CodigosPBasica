#include <iostream>

#define NumAlumnos 5

using namespace std;

int main (void){
	int AlumnosLeidos = 0;
	float nota, Suma, Media;
	Suma = 0;

	while (AlumnosLeidos <= NumAlumnos)
	{
		cout<< "Ingrease una nota";
		cin >> nota;

		Suma=Suma+nota;

		AlumnosLeidos = AlumnosLeidos +1;
	}

	Media = Suma/NumAlumnos;
	cout << "la nota media es: " << Media <<"\n\n";

	return 0;
}


