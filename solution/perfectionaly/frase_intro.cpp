#include <stdio.h>
#include <stdlib.h>






int main (int argc, char *argv[]){
     char *frase;
    const char *final= frase;
 
   printf(" Introduce la frase :  ");
   scanf(" %c", &frase);

    while(*final != '\0')
	    *final++;  

    while(*final != *frase){
	*final--;
        printf("%c", *final);
    }
printf("\n");

    return EXIT_SUCCESS;
}
