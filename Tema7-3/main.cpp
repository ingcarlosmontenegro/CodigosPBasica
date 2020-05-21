#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int funcionfor(int a);int funcionfor01(int a);
int funcionwhile(int a); int funciondo(int a);
void funcionswitch();

int main(int argc, char** argv) {

	int a = 0;  // 10, 100, 0
	printf("Ingrese su numero: ");
	scanf("%d",&a);
  //cin >> a;
	int c = funcionfor(a);
	printf("resultado for: %d \n",c);
	int d = funcionwhile(a);
	printf("resultado while: %d \n",d);
	int e = funciondo(a);
	printf("resultado do: %d \n",e);
	funcionswitch();

	return 0;
}

void funcionswitch(){
    int num;
	string nombre = "Amarillo";
    stringstream(nombre)>>num;
    cout << num;
	switch(num){
		case strlen("Amarillo"): printf("Buen Color \n"); break;
		case strlen("Naranja"): printf("Color de Alerta \n"); break;
		case strlen("Azul"): printf("Color de tranquilidad \n"); break;
		default:printf("Otros Colores \n"); 
	}
}

int funcionfor(int a){  //10 -> 55     100 -> 5050    0 -> 0
	int suma = 0;
	for(int i=1;i<=a;i++){  //i++  -> i = i + 1
		suma += i;			//suma += 1   ->  suma = suma + i
	}
	return suma;
}

int funcionwhile(int a){  //10 -> 55     100 -> 5050    0 -> 0
	int suma = 0, i = 1; // int suma = 0; int i = 1;
	while(i<=a){
		suma += i;
		i++;
	}
	return suma;
}

int funciondo(int a){   //10 -> 55     100 -> 5050    0 -> 1
	int suma = 0, i = 1;
	do {
		suma += i;
		i++;
	} while(i<=a);
	return suma;

}

int funcionfor01(int a){  
	int suma = 0;
	for(int i=0;i<=a;i = i + 2){  //i++  -> i = i + 1
		suma += i;			//suma += 1   ->  suma = suma + i
	}
	return suma;
}