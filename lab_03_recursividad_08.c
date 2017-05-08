# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "Listas_enlazadas.h"

/****************************************************************
* Programa: lab_03_recursividad_08.c
*
* Objetivo: Escriba una función recursiva llamada listarLista que 
*			imprima los valores de una lista simplemente enlazada.  
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

void listarLista(Nodo*);


int main(int argc, char *argv[]){
	
	Lista *A = crearLista();
	insertarElemento(A,11);
	insertarElemento(A,14);
	insertarElemento(A,54);
	insertarElemento(A,14);
	insertarElemento(A,67);
 
 	listarLista(A->ini);
}

void listarLista(Nodo *n){
	if (n->sgte == NULL){
		printf("%i \n",n->dato->num);
	}else{
		printf("%i , ",n->dato->num);
		listarLista(n->sgte);
	}
}
