# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "Listas_enlazadas.h"

/****************************************************************
* Programa: lab_03_recursividad_11.c
*
* Objetivo:   Escriba una función recursiva llamada eliminarX que 
*			elimine el elemento x de la lista L. 
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

void eliminarX(Lista *,Nodo *,int);

int main(int argc, char *argv[]){
	
	int elemento=54;
	
	Lista *A = crearLista();
	insertarElemento(A,11);
	insertarElemento(A,14);
	insertarElemento(A,54);
	insertarElemento(A,14);
	insertarElemento(A,67);
 
 	eliminarX(A,A->ini,elemento); 	
}

void eliminarX(Lista *L,Nodo *aux,int valor){
	if (aux->dato->num == valor){
		printf("\n");
		printf("ELEMENTO ELIMINADO !!!");
		printf("\n");
		eliminarNodo(L,valor);	
	}else if (aux->sgte == NULL){
		printf("\n");
		printf("ERROR : No se encontro !!!");
		printf("\n");
	}else{		
		eliminarX(L,aux->sgte,valor);
	}
}
