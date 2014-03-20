#include <stdio.h>
#include <stdlib.h>  

double calculo(double operador_01,double operador_02){
    double resultado;   
    resultado = operador_01 + operador_02;
    printf("Resultado de su operacion:  %lf", resultado);
}


int main (int argc,char *argv[]){

    double numero1 = atoi (argv[1]);
    double numero2 = atoi (argv[2]);
  
    calculo(numero1,numero2);
    printf("\n");

	    return EXIT_SUCCESS;
	    } 
