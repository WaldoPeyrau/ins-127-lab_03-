# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "Listas_enlazadas.h"

/****************************************************************
* Programa: lab_03_recursividad_13.c
*
* Objetivo:   13) Escriba una función recursiva llamada insertarOrdenado 
* 				que inserte en forma ordenada un elemento x en una lista 
* 				ordenada L. 
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

void insertarOrdenado(Lista *,Nodo *, int);

int main(int argc, char *argv[]){
	
	int mayor=0;
	
	Lista *A = crearLista();
	insertarElemento(A,11);
	insertarElemento(A,14);
	insertarElemento(A,24);
	insertarElemento(A,45);
	insertarElemento(A,67);
 
 	insertarOrdenado(A,A->ini,44);
}

void insertarOrdenado(Lista *L,Nodo *aux, int x){
	if(x >= aux->dato->num && x <= aux->sgte->dato->num){
		insertarDespues(L,x,aux->dato->num);
		printf("\n");
		printf("Dato ingresado de forma exitosa !!! ");
		printf("\n");
	}else if(x < L->ini->dato->num){
		insertarElemento(L,x);
		printf("\n");
		printf("Dato ingresado de forma exitosa !!! ");
		printf("\n");
	}else if(x > L->fin->dato->num){
		insertarFinal(L,x);
		printf("\n");
		printf("Dato ingresado de forma exitosa !!! ");	
		printf("\n");
	}else if(aux->sgte == NULL){
		printf("");
	}else{
		insertarOrdenado(L,aux->sgte,x);
	}
}
