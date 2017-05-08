# include <stdio.h>
# include <stdlib.h>
# include <string.h>


/****************************************************************
* Programa: lab_03_recursividad_01.c
*
* Objetivo: Escribir una función recursiva llamada calcularFactorial 
* que calcule el factorial de un número X
*
* Fecha Creación: 02/05/2017  Fecha última actualización: 02/05/2017
*
* Autor/Grupo: Waldo Peyrau Morales
*
* Asignatura: Estructura de datos INS127     Sección: 651
*
*****************************************************************/


int calcularFactorial(int numero);


int main(int argc, char *argv[]){
	int x=5 ;
	int F;
	
	F=calcularFactorial(x);
	printf("\n%d! = %d",x,F);
	
	return 0;
}

int calcularFactorial(int numero){
	int fact=1;
	if (numero==0){
		fact = 1;
	}else{
		fact = numero*calcularFactorial(numero-1);
			
	}
	
	return fact;
}


	
