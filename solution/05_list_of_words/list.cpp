
#include <stdlib.h>
#include <stdio.h>

void cantidad_cosas(const char *numero){
    printf(" Cantidad de cosas de la lista:%i", numero);
}
 
int main(int argc, char *argv[]){
	const char *list[]={
	    "bread",
	    "toast",
	    "bacon",
"milk"
	};
	cantidad_cosas(list[]);
	printf("\n");

    for(int nombre=0; nombre<list[]; nombre++){
	printf(" %s\n", list[nombre]);
    }


	return EXIT_SUCCESS;
    }
