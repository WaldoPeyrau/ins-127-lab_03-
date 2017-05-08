# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "Listas_enlazadas.h"

/****************************************************************
* Programa: lab_03_recursividad_10.c
*
* Objetivo:   
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

bool existeElemento(Nodo *aux,int buscar);

int main(int argc, char *argv[]){
	
	int elemento=54;
	
	Lista *A = crearLista();
	insertarElemento(A,11);
	insertarElemento(A,14);
	insertarElemento(A,54);
	insertarElemento(A,14);
	insertarElemento(A,67);
 
 	
 	if (existeElemento(A->ini,elemento)){
		printf("verdadero");
	}else{
		printf("falso");
	}
 	
}


bool existeElemento(Nodo *n,int valor){
	if (n->dato->num == valor){
		return true;
	}else if(n->sgte == NULL){
		return false;
	}else{
		return existeElemento(n->sgte,valor);
		return false;
	}
}
