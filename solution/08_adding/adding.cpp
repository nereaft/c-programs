#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
//Sera el contador donde se almacenan mis numeros
        double resultado = 0;
//argv se utiliza como numero limite ya que contiene la cantidad de numeros que tiene la array argv
	    for (int argumento=1; argumento < argc; argumento++)
//transforma los argumentos de argv a numeros double
		resultado += atof(argv[argumento]);

	        printf("%lf\n", resultado);

		    return EXIT_SUCCESS;
}

