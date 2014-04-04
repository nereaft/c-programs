#include <stdlib.h>
#include <stdio.h>

#define NUM 10

int factorial(int NUM){

    int resultado = 1;

    for(int contador = 1; contador < NUM; contador++)
	resultado *= contador;

    return resultado;

}


double calculo(int NUM){

    printf("%i\n", NUM);
    if(NUM == 0)
	return 1;

    if(NUM < 0)
	return 0;

    if(NUM > 0)
	return 1. / factorial(NUM) + calculo(NUM-1);

}




int  main(int  argc, char *argv[]){

    /*Cojo un n umero le hago el inverso
       y se lo sumo */
    calculo(NUM);

    printf(" %.2lf", calculo(NUM));

    printf(" \n");

    return EXIT_SUCCESS;
} 



