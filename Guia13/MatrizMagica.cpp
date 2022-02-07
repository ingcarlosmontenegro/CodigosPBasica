
//Programa	de	la	matriz	mágica
#include	<cstdlib>
#include	<iostream>
using	namespace	std;
int	main(int	argc,	char	*argv[])
{
					 int	i,	j,	aux,	tam,	suma;
					 int	con=0;
					 int	magica	[10][10];
					 int	sumas	[22];
//Ingreso	de	datos
cout<<	"Por	favor	digite	el	numero	de	filas	de	la	matriz	(entre	2	y	10)";
cin>>tam;
for	(i=0;	i<=tam-1;	i++){
						for	(j=0;	j<=tam-1;	j++){
										cout<<"Por	favor	digite	el	dato	de	la	posicion:	"<<	i	<<	","<<	j	<<":	";
										cin>>	magica	[i][j];
					 }
}
//Inicializar	el	arreglo	sumas
for	(i=0;	i<=2*tam+2;	i++	){
					sumas	[i]=0;
}
//filas
for	(i=0;	i<=	tam-1;	i++){
					for	(j=0;	j<=tam-1;	j++){
									sumas[i]=magica[i][j]+sumas[i];
					}
}
//columnas
		for	(j=0;	j<=	tam-1;	j++){
					for	(i=0;	i<=tam-1;	i++){
									sumas[i+tam]=magica[i][j]+sumas[i+tam];
					}
}
//Diagonales
for	(i=0;	i<=tam-1;	i++){
					sumas[2*tam]=magica	[i][i]+sumas[2*tam];
}
for	(i=0;	i<=tam-1;	i++){
					sumas[2*tam+1]=magica	[i][(tam-1)-i]+sumas[2*tam+1];
}
con=	sumas[0];
//imprimir	arreglo	sumas
cout<<"arreglo	suma	\n"	;	
for	(i=0;	i<=	2*tam+1;	i++){
				cout<<	i	<<	"=	"	<<sumas	[i]	<<	endl;
}
//	Verificar	la	suma	en	el	arreglo
for	(i=1;	i<=	2*tam+1;	i++){
					if	(con	!=	sumas	[i]){
													cout<<	"la	matriz	no	es	magica	\n";
													i=2*tam+3;
						}
}
if	(i	==	2*tam+2)
				 cout	<<	"la	matriz	es	mágica y	la	suma	es:	"<<	con	<<	endl;
		 		return	EXIT_SUCCESS;
}