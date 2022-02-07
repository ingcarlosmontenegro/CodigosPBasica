#include	<iostream>
#include	<stdlib.h>

/****Este	programa	lee	los	datos	de	una	matriz	3x4	y	muestra	en	pantalla la	suma	de	los	
datos	de	cada	fila	*****/

using namespace std;

int	main(int	argc,	char	*argv[]){
							int	matriz[3][4];
							int	arreglo[3];
							int	i,j;
							//Ingreso	de	los	datos
							for	(i=0;i<3;i++){
											for	(j=0;j<4;j++){
													cout	<<	"Ingrese	el	numero	entero	correspondiente	a	la	posicion	["<<i<<"]	["<<j<<"]:";
													cin	>>	matriz[i][j];
											}
							}
//Muestra	en	pantalla	la	matriz	ingresada
							cout	<<	"\nLa	matriz	que	usted	ingreso	es:	\n\n";
							for	(i=0;i<3;i++){
											for	(j=0;j<4;j++){
															cout	<<	matriz[i][j]<<"	";
											}
											cout	<<	"\n";
							}
//Suma	los	datos	de	cada	fila
							for	(i=0;i<3;i++){
											arreglo[i]=0;
											for	(j=0;j<4;j++){
															arreglo[i]=arreglo[i]+matriz[i][j];
											}
							}
//Muestra	en	pantalla	los	resultados
							for	(i=0;i<3;i++){
											cout	<<	"\nLa	suma	de	los	datos	de	la	fila	"<<i<<"	es:	"	<<	arreglo[i];
							}
}