# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "Listas_enlazadas.h"

/****************************************************************
* Programa: lab_03_recursividad_06.c
*
* Objetivo: Escriba una función recursiva llamada calcularOcurrencia que 
*			cuente la cantidad de ocurrencias de un elemento x en una lista L. 
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

int calcularOcurrencia(Nodo*,int);


int main(int argc, char *argv[]){
	
	int ocurrencia,valor=14;
	
	Lista *A = crearLista();
	insertarElemento(A,11);
	insertarElemento(A,14);
	insertarElemento(A,54);
	insertarElemento(A,14);
	insertarElemento(A,67);
	
	ocurrencia=calcularOcurrencia(A->ini,valor);
	printf("%d",ocurrencia);
}

int calcularOcurrencia(Nodo *aux, int x){
	if(aux != NULL){
		if(aux->dato->num == x){
			return ( 1 + calcularOcurrencia(aux->sgte,x));
		}
		return calcularOcurrencia(aux->sgte,x);
	}else{
		return 0; 
	}
	
}
