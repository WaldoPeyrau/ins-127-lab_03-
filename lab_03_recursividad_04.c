# include <stdio.h>
# include <stdlib.h>
# include <string.h>


/****************************************************************
* Programa: lab_03_recursividad_04.c
*
* Objetivo: escribir una funcion recursiva que permita busca un valor x en un arreglo
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

void buscarX (int[],int,int);

int main(int argc, char *argv[]){
	int A[]={3,2,6,3,1};
	int tam = sizeof(A)/sizeof(int);
	int valor=3;
	
	buscarX(A,tam,valor);
	
	return 0;
}

void buscarX(int A[],int tam, int valor){
	
	if (tam<1){
		printf("fin de la busqueda");
	}else{
		if(A[tam-1]==valor){
			printf("valor encontrado en la posicion: %d\n",tam);
		}
		buscarX(A,tam-1,valor);
	}
}
