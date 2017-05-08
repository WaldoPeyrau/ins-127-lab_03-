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

bool sonIguales(Lista*,Lista*);

int main(int argc, char *argv[]){
	
	Lista *A = crearLista();
	Lista *B = crearLista();
	insertarElemento(A,11);
	insertarElemento(A,32);
	insertarElemento(A,54);
	insertarElemento(A,14);
	insertarElemento(A,67);
	
	insertarElemento(B,11);
	insertarElemento(B,32);
	insertarElemento(B,54);
	insertarElemento(B,14);
	insertarElemento(B,67);
	
	if (sonIguales(A,B)){
		printf("verdadero");
	}else{
		printf("falso");
	}

	return 0;
}

bool sonIguales(Lista* A,Lista* B){
	
	if (A->tam!=B->tam){
		return false;
	}else{
		if(A->ini==NULL){
			return true;
		}else{
			if (A->ini->dato->num != B->ini->dato->num){
				return false;
			}else{
				A->ini=A->ini->sgte;
				B->ini=B->ini->sgte;
				sonIguales(A,B);
			}
		}
	}
}






