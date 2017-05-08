# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include "Listas_enlazadas.h"

/****************************************************************
* Programa: lab_03_recursividad_09.c
*
* Objetivo: Escriba una función booleana recursiva llamada sonIguales 
* 			que reciba dos listas como parámetros y devuelva TRUE si 
* 			son iguales (mismos elementos en el mismo orden), o 
* 			FALSE en caso contrario. 
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

int sumaC(Lista *,int);
int sumaNodos(Lista*);

int main(int argc, char *argv[]){
	int C =11, suma;
	
	Lista *A = crearLista();
	insertarElemento(A,9);
	insertarElemento(A,2);
	insertarElemento(A,5);
	insertarElemento(A,7);
	insertarElemento(A,1);
	insertarElemento(A,6);
	insertarElemento(A,3);
	
	suma=sumaC(A,C);
	printf("%d",suma);
}

int sumaC(Lista *a,int c){
	if(sumaNodos(a)<c){
		return a->tam+1;
	}else{
		a->ini=a->ini->sgte;
		a->tam--;
		sumaC(a,c);
	}
}
		

int sumaNodos(Lista *a){
	int i,suma;
	Nodo *aux=a->ini;
	for (i=0;i<a->tam;i++){
		suma=suma+aux->dato->num;
		aux=aux->sgte;
	}
//	printf("%d \n",suma);
	return suma;
}
		
