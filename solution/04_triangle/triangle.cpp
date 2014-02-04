#include <stdio.h>
#include <stdlib.h>

void cuadrado (int cantidad){
	for(int fila=0;fila<cantidad;fila++){
		printf("\n");
		for(int colm=0;colm<cantidad;colm++){
			if(fila>=colm)
				printf("*");
			else
				printf(" ");
		}
	}
}


int main(int argc, char *argv[]){
	int altura;

	printf("Introduce la altura del triangulo:  ");
	scanf(" %i", &altura);

	printf("Este es su Triangulo.\n");
	cuadrado (altura);
	printf("\n");




	return EXIT_SUCCESS;
}
