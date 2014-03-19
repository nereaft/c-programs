#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void repartir(int *cartas, int jugador[], int num_jugadores){

    static int posicion=0;

    (*cartas)--;
    jugador[*cartas % num_jugadores]++;
    posicion ++;
}

void muestra(int cartas[],int num_jugadores){
    for(int i =0; i<num_jugadores; i++){
	printf("Jugador %i : %i cartas", i+1, cartas[i]);
	printf("\n");
    }
}

int main(int argc, char *argv[]){

    int num_jugadores, cartas=40;
    int jugador[40];

    printf(" Numero de Jugadores:  ");
    scanf(" %i", &num_jugadores);

    while(cartas > 0)
	repartir(&cartas, jugador, num_jugadores);

    muestra(jugador,num_jugadores);

    printf("\n");
    return EXIT_SUCCESS;
}
