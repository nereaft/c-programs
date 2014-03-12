#include <stdlib.h>
#include <stdio.h>

#define N 0x10 
 //crea la matriz de 1 al 16
void rellenar(int lista_base [N]){
  for(int contador=0; contador < N; contador++)
      list [contador]= contador+1;
}





 int  main(int argc, char *argv[]){
	int lista_base [N]; // Creo la variable con la cantidad de la constante
	int expo;
//Introduzco el numero al que elevo la matriz
	printf("Introduce la cantidad del exponente:  ");
	scanf(" %i", &expo);
//se llaman a la funcion
	rellenar(lista_base);
	calculo(lista_base, expo);





	return EXIT_SUCCESS;
    }
