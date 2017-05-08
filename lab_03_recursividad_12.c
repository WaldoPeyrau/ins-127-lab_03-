# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "Listas_enlazadas.h"

/****************************************************************
* Programa: lab_03_recursividad_12.c
*
* Objetivo:   12) Escriba una función recursiva llamada calcularMaximo 
* 				que encuentre el máximo de una lista de naturales L. 
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

int calcularMaximo(Nodo *,int);

int main(int argc, char *argv[]){
	
	int mayor=0;
	
	Lista *A = crearLista();
	insertarElemento(A,11);
	insertarElemento(A,14);
	insertarElemento(A,54);
	insertarElemento(A,14);
	insertarElemento(A,67);
 
 	mayor=calcularMaximo(A->ini,mayor); 	
	printf("%d",mayor);
}

int calcularMaximo(Nodo *aux, int mayor){
	if (aux->sgte == NULL){
		return mayor;
	}else{
		if(mayor < aux->dato->num){
			return calcularMaximo(aux->sgte,aux->dato->num);
		}else{
			return calcularMaximo(aux->sgte,mayor);
		}
	}
}
