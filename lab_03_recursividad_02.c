# include <stdio.h>
# include <stdlib.h>
# include <string.h>


/****************************************************************
* Programa: lab_03_recursividad_02.c
*
* Objetivo: multiplicacion de dos numeros a traves de la suma de ellos
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/


int multiplicarConSumas (int x, int y);

int main(int argc, char *argv[]){
	int x=8 , y=12;
	int F;

	F = multiplicarConSumas(x,y);
	printf("%d * %d = %d\n",x,y,F);
	
	return 0;
}



int multiplicarConSumas(int x, int y){
	int prod=0;
	if (y==0){
		return 0;
	}else{
		prod = x + multiplicarConSumas(x,y-1);
	}
	return prod;
}
