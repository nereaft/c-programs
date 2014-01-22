#include<stdio.h>
#include<stdlib.h>

#define N_MAX 10

int main(int argc, char *argv[]){
    int media=0;
    int numero=0;
    int suma=0;

    for(int cantidad=0;cantidad<N_MAX;cantidad++){
	printf("Introduzca el numero para hacer la media (intente que sean enteros):\n");
	scanf(" %i", &numero);
	suma += numero;
    }
    media = suma / N_MAX;

    printf("el resultado de la media es:%i\n", media);




    return EXIT_SUCCESS;
}
