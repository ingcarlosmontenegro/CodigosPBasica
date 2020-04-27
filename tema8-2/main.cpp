#include <iostream>
#include <ctime> 
#include <stdlib.h> 

#define PI 3.14

using namespace std;

struct Persona{
	string Nombre;
	int edad;
	bool genero;
    
	void setEdad(int valor){
		if (genero) edad = valor+5;
		else edad = valor -2;
	}
	int getEdad(){ 
        return edad;
    }
};

void funcionStruct();
void funcionMedirMatrices();
void funcionArrayDinamico();
bool esprimo(int a); 
int sumaprimos(int a);
void funcionRevisaArreglo();
int *retornaArreglo();
void VectorAleatorio(int V1[]);

int main(int argc, char** argv) {
    cout << "Valor Pi: ";
	printf("%f\n",PI);
    cout << "Llamado a la funcion Struct desde el main \n";
    funcionStruct();
    cout << "Llamado a la funcion MedirMatrices desde el main \n";
    funcionMedirMatrices();
    cout << "Llamado a la funcion ArrayDinamico desde el main \n";
    funcionArrayDinamico();
    cout << "Llamado a la funcion RevisaArreglo desde el main \n";
    funcionRevisaArreglo();
    
    cout << "Los Valores del arreglo A[4] son: \n";
	int A[4];
	for(int i=0;i<4;i++){
		cout<<A[i]<<endl;	
	}
    cout << "Llamado a la funcion VectorAleatorio desde el main \n";
	VectorAleatorio(A);

	cout<<"Ahora Los Valores del arreglo A[4] son: \n"<<endl;
	for(int i=0;i<4;i++){
		cout<<A[i]<<endl;	
	}

	int num, numlim;
	cout<<"Ingrese el Numero: ";
	cin>>numlim;
	cout<<" la suma de los primos hasta "<<numlim<< " es "<<sumaprimos(numlim)<<endl;

	return 0;

}

int *retornaArreglo(){
	int *array1 = new int[5];
	int a[5] = {1, 2, 3, 4, 5};
    
	for(int i = 0; i<5;i++){
		array1[i] = a[i];
		cout<<array1[i]<<endl;
	}
    cout << "------- Fin Función retornaArreglo --------- \n";
	return array1;
}

void funcionRevisaArreglo(){
    cout << "Llamado a la función retornaArreglo desde funcionRevisaArreglo \n";
	int *a = retornaArreglo();
	for(int i = 0; i<5;i++){
		cout<<a[i]<<endl;
	}
	delete[] a;
    cout << "------- Fin Función RevisaArreglo --------- \n";
}

void VectorAleatorio(int V1[]){
  	srand(time(NULL));
	for(int i = 0; i < 4; i++){
	        int b = rand()%10;
			int c = 0;
			for( int j = 0; j < i; j++){
                if (V1[j]== b) c = 1;
			}       
			if(c==0){
                V1[i] = b;        
			} else {
			      i--;        
			}    
	}    
    cout << "------- Fin Función VectorAleatorio --------- \n";
	return;
    
}

int sumaprimos(int a){
	int num, suma = 0;
	for(num=2;num<=a;num++){
        cout << "Llamado a la función esprimo desde sumaprimos \n";
		if(esprimo(num)) suma += num; 
	}
    cout << "------- Fin Función sumaprimos --------- \n";
	return suma;
}

bool esprimo(int a){
	int i, esprimo = 0;
	for(i=2;i<a;i++){
		if(a%i==0) {
			esprimo = 1;
			break;
		}
	}
	if(esprimo==0){
		cout<<a<<" es Primo"<<endl;
		return true;
	} else {
		return false;
	}
		cout<<a<<" no es Primo"<<endl;
        cout << "------- Fin Función sumaprimos --------- \n";
}

void funcionStruct(){
    cout << "Creación de estructura Persona" << endl;
	Persona persona1;
	cout<<"Ingrese su nombre: ";
	cin>>persona1.Nombre;
	persona1.edad = 40;
	persona1.genero = true;
	cout<<"Edad: "<<persona1.edad<<endl;
	cout<<"Genero: "<<persona1.genero<<endl;
	cout<<"Nombre: "<<persona1.Nombre<<endl;
	cout<<"Ingrese su Edad: ";
	int tempoedad;
	cin>>tempoedad;
	persona1.setEdad(tempoedad);
	cout<<"Edad: "<<persona1.edad<<endl;
	cout<<"Edad: "<<persona1.getEdad()<<endl;
	Persona persona2,persona3,persona4;
    cout << "------- Fin Función Struct --------- \n";
}

void funcionArrayDinamico(){
	int *ArrayDinamico;
	int num;
	cout<<"Cuantos elementos: ";
	cin>>num;
	ArrayDinamico = new int[num];
	//ArrayDinamico = new int[num]; {};
	//ArrayDinamico = new int[num] {1,2,4,6,7,9};
    cout<<"tamano:"<<sizeof(ArrayDinamico[0])<<endl;
	cout<<"tamano:"<<sizeof(ArrayDinamico)<<endl;
	for(int i=0;i<num;i++){
		cout<<ArrayDinamico[i]<<endl;
	}
	delete[] ArrayDinamico;
    cout << "------- Fin Función ArrayDinamico --------- \n";
}

void funcionMedirMatrices(){
	int a[] = {1, 4, 5, 2, 8,13};
	printf("el tamaño de a[] es: %d bytes\n",sizeof(a));
	printf("el tamaño de a[0] es: %d bytes\n",sizeof(a[0]));
	printf("el tamaño de a[]/a[0] es %d elementos\n",sizeof(a)/sizeof(a[0]));
    cout << "------- Fin Función MedirMatrices --------- \n";
}