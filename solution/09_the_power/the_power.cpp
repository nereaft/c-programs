#include <stdlib.h>
#include <stdio.h>

#define N 16

void rellenar(int matriz [N]){
	for(int numeros = 0; numeros < N; numeros++)
		matriz[numeros] = numeros+1; 
}


int  main(int argc, char *argv[]){
	int matriz [N];
	int resultado = 0 ;
	int expo;
	printf("Introduzca el exponente:  ");
	scanf(" %i", &expo);

	rellenar(matriz);

	printf("Numeros elevados a %i\n", expo);

	for(int i = 0; i < N; i++){
		resultado = matriz[i] * matriz[i];
		printf("%i = %i \n", matriz[i],resultado);
	}





	return EXIT_SUCCESS;
}
