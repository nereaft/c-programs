#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
const char *frase=" The world is a vampire.";
const char *comienzo= frase;
const char *final= frase;
do{
   comienzo++;
}while (*comienzo != '\0');

final = comienzo;

do{
    printf("%c", *final);
    final--;
}while (final != frase);
    



printf("\n");
    return EXIT_SUCCESS;
}
