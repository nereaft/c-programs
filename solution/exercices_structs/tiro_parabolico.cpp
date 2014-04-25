#include<stdio.h>
#include<stdlib.h>

typedef struct{ 
    double x;
    double y;
}Coordenadas;

void muestra(Coordenadas posicion, Coordenadas aceleracion, Coordenadas velocidad){

    while(posicion.y >= 0){
	velocidad.x += aceleracion.x;
	velocidad.y += aceleracion.y; 	
	posicion.x += velocidad.x;
	posicion.y += velocidad.y;
	printf(" X:%lf Vx:%lf \nY:%lf Vy:%lf ", posicion.x, velocidad.x, posicion.y, velocidad.y);
    printf("\n");
    }

}



int main(int argc,  char *argv[]){

    Coordenadas posicion={5,6},
	   velocidad,
	   aceleracion={0,-10};

    printf("Velocidad inicial: \n x:");
    scanf(" %lf", &velocidad.x);
    printf(" y: ");
    scanf(" %lf", &velocidad.y);

    /*Ecuaciones :
      s += v
      v += a
      vx += ax 
      vy += ay 
      x += vx 
      y += vy 
     */

    muestra(posicion,aceleracion,velocidad);

    printf("\n");
    return EXIT_SUCCESS;
}

