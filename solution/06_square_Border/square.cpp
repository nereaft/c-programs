#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int altura = atoi(argv[1]);

	for(int fila=0; fila<altura; fila++){
		for(int colm=0; colm<altura; colm++){
			if(fila==0 || colm ==0 || fila ==altura-1 || colm == altura-1){
				printf("*");
			}else{
				printf(" ");
			}

		}
printf("\n");	
}
	printf("\n");
	return EXIT_SUCCESS;
}
