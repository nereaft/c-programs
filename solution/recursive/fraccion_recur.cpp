#include <stdlib.h>
#include <stdio.h>



int factorial (int cantidad){

    int resultado = 0;

    for(int contador = 1; contador < cantidad; contador++);
    resultado *= contador;

    return resultado;

}


double calculo(int cantidad){

    if(cantidad = 0)
	return 1;

    if(cantidad < 0)
	    return 0;
    
    if(cantidad > 0)
	    return 1 / factorial(cantidad) + calculo(cantidad-1);

}




int  main(int argc, char *argv[]){

    int cantidad ;
 /*Cojo un numero le hago el inverso
    y se lo sumo */

    printf(" Introduce el numero para la recursividad del factorial: ");
    scanf(" %i ", &cantidad);

    calculo(cantidad);

    printf(" %.2lf", calculo(cantidad));

    printf(" \n");

    return EXIT_SUCCESS;
}



