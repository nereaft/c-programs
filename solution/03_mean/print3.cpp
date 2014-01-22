#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int num_cantidad;
    int media =0;
    int suma=0;
    int numero=0;

    printf("Indique la cantidad de numeros para hacer la media:");
    scanf(" %i", &num_cantidad);
if(num_cantidad>0){
    for(int cantidad =0; cantidad<num_cantidad; cantidad++){
	printf("Introduce el numero para la media:");
	scanf(" %i", &numero);
	suma += numero;
    }
    media = suma / num_cantidad;
    printf("Su media es:%i\n",media);

}else{
printf("No es posible introducir numero negativo.\n");
printf("Introduce un numero que contenga signo positivo\n");
system("./print3");
}

	return EXIT_SUCCESS;
}
