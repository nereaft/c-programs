#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (int argc, char *argv[]){

    const char * list[] = { "yield", "yelp"};

    int valor = strcmp(list[0],list [1]);

    if(valor == 0 ){
	printf(" %s %s ", list[0],list[1]);
    }else{
	if(valor > 0)
	    printf(" %s \n %s ", list[0],list[1]);
	else 
	    printf("%s \n  %s ", list[1],list[0]);
    }

    printf("\n");





    return EXIT_SUCCESS;
}
