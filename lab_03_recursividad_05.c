# include <stdio.h>
# include <stdlib.h>
# include <string.h>


/****************************************************************
* Programa: lab_03_recursividad_05.c
*
* Objetivo: Escriba una función recursiva llamada imprimirArreglo que imprima los elementos del arreglo A.
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

void imprimirArreglo (int[],int,int);

int main(int argc, char *argv[]){
	int A[]={3,2,6,3,1};
	int tam = sizeof(A)/sizeof(int);
	
	printf("\nArreglo de inicio a fin\n");
	imprimirArreglo(A,tam,1);
	printf("\nArreglo de fin a inicio\n");
	imprimirArreglo(A,tam,2);


	return 0;
}

void imprimirArreglo(int A[],int tam,int orden){
	
	if (tam>0 && orden==1){
		imprimirArreglo(A,tam-1,1);
		printf("%d ",A[tam-1]);
	}
	if (tam>0 && orden==2){	
		printf("%d ",A[tam-1]);
		imprimirArreglo(A,tam-1,2);
	}
	
}
