# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "Listas_enlazadas.h"

/****************************************************************
* Programa: lab_03_recursividad_14.c
*
* Objetivo:   14) Escriba una función recursiva llamada 
* 				ordenarLista que ordene una lista L.  
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

void ordenarLista(Lista*,Nodo*,Nodo*);

int main(int argc, char *argv[]){
	
	Lista *A = crearLista();
	insertarElemento(A,11);
	insertarElemento(A,14);
	insertarElemento(A,24);
	insertarElemento(A,45);
	insertarElemento(A,67);
 
 	ordenarLista(A,A->ini,A->ini->sgte);
 	
}

void ordenarLista(Lista *L,Nodo *aux,Nodo *aux2){
	if(aux->sgte != NULL && aux2->sgte != NULL){
		if (aux2->dato->num > aux2->sgte->dato->num){
			int num,num2;
			num = aux2->dato->num;
			aux2->dato->num = aux2->sgte->dato->num;
			aux2->sgte->dato->num = num;
			ordenarLista(L,aux,aux2->sgte);	
		}
		ordenarLista(L,aux,aux2->sgte);
	}else if(aux->sgte == NULL){
		printf("");
	}else{
		aux2 = L->ini;
		ordenarLista(L,aux->sgte,aux2);	
	}
}
