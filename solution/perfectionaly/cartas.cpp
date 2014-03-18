#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void repartir(int *cartas, int que_jugador[numero_jugadores]){
	static int posicion=0;

	(*cartas)--;
	que_jugador[cartas % numero_jugadores]++;
	posicion ++;

}

void mostrar(int mano[numero_jugadores]){
	for(int i=0;i<numero_jugadores;i++){
		printf("Jugador %i: %i cartas\n", i+1,mano[i]);
printf("\n");
	}
}

	int main (int argc,char *argv[]){

		int numero_jugadores, cartas=40,
		    int JUGADORES[numero_jugadores];

		printf("Numero de jugadores:  ");
		scanf(" %i ", &numero_jugadores);
		
memset(JUGADORES,0, sizeof(JUGADORES));
		while(cartas>0)
			repartir(&cartas,JUGADORES);

		mostrar(JUGADORES);

		return EXIT_SUCCESS;
	}
