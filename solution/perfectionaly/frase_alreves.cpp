#include <stdio.h>
#include <stdlib.h>






int main (int argc, char *argv[]){
    const char *frase= "The World is a vampire.";
    const char *final= frase;
 
    while(*final != '\0')
	    *final++;  

    while(*final != *frase){
	*final--;
        printf("%c", *final);
    }
printf("\n");

    return EXIT_SUCCESS;
}
