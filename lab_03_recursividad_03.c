# include <stdio.h>
# include <stdlib.h>
# include <string.h>


/****************************************************************
* Programa: lab_03_recursividad_03.c
*
* Objetivo: multiplicacion de dos numeros a traves de la suma de ellos
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

int sumarArreglo (int[],int);

int main(int argc, char *argv[]){
	int A[]={3,2,6,1};
	int tam = sizeof(A)/sizeof(int), suma;
	suma = sumarArreglo(A,tam);
	printf("%d",suma);
	
	return 0;
}

int sumarArreglo(int A[],int tam){
	int suma=0;
	if (tam<1){
		return 0;
	}else{
		suma = A[tam-1] + sumarArreglo(A,tam-1); 
	}
	return suma;
}
