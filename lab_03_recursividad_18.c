# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include "Listas_enlazadas.h"

/****************************************************************
* Programa: lab_03_recursividad_18.c
*
* Objetivo: Escriban una función recursiva llamada CaminosPosibles que 
* 			calcule el número de caminos posibles para alcanzar un 
* 			adoquín objetivo numerado con n (mayor que cero).
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/

int caminosPosibles(int);


int main(int argc, char *argv[]){
	
	int n=5,caminos;
	caminos=caminosPosibles(n);
	printf("caminos posibles para llegar al adoquin %d: %d\n",n,caminos);
}

int caminosPosibles(int n){
	
	if (n==0 || n==1){
		return 1;
	}else{
		return caminosPosibles(n-1)+caminosPosibles(n-2);
	}
}
		
