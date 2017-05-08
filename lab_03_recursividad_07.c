# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "Listas_enlazadas.h"

/****************************************************************
* Programa: lab_03_recursividad_07.c
*
* Objetivo: Escriba una función recursiva llamada sumaLista que 
* 			retorne la suma de los elementos de una lista de enteros L. 
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

int sumaLista(Nodo*,int);


int main(int argc, char *argv[]){
	
	int suma;
	
	Lista *A = crearLista();
	insertarElemento(A,11);
	insertarElemento(A,14);
	insertarElemento(A,54);
	insertarElemento(A,14);
	insertarElemento(A,67);
 
 	suma=sumaLista(A->ini,A->tam);
	printf("%d",suma);
}

int sumaLista(Nodo *n, int tam){
	if (tam == 1){
		return n->dato->num;
	}else{
		return (n->dato->num + sumaLista(n->sgte,tam-1));
	}
}
