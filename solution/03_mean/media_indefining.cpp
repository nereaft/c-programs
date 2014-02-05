#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int numero = 0, cant_numeros =0;
    double media = 0;

    do{ printf("Introduce el numero para realizar la media: ");
	scanf(" %i", &numero);

	if(numero>0){
	    media+= numero;
	    cant_numeros++;
	}
    }while(numero>0);

    media /= cant_numeros;
    printf("La media final es: %.2lf\n", media);




    return EXIT_SUCCESS;
}
