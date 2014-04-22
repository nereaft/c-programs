/*
            *******************************
				*	EL JUEGO DE LA SERPIENTE	*
            *******************************

	Desarrollar el juego de la serpiente conforme a las
   especificaciones siguientes:

   	1. Un diagrama completo de las funciones que se van a presentar.
      2. C�digo fuente necesario para que el juego funcione (.cpp + .ide).
      3. Fichero ejecutable, libre de virus del juego.

   Tiempo m�nimo estimado para su realizaci�n:	3 horas 30 minutos.
   Tiempo m�ximo estimado para su realizaci�n:  12 a 20 horas.
	Fecha �ltima de entrega: 30 de Marzo a las 12:00 h
*/




/*		DATOS

		Estructura cuerpo. -> 	Coordenada x
      								Coordenada y
                              Puntero al anillo anterior del cuerpo.

      La primera parte del cuerpo tendr� el puntero con valor NULL. La
      �ltima se pintar� con un espacio en blanco.

      Estructura de una serpiente -> 	Avance X.
                                       Avance Y.
                                       posiciones por crecer.
                                       Numero de frutas comidas.
                                       puntos del jugador.
      											Puntero a la cola.

      El avance es una variable de tipo enum que puede valer -1,0,1

      Estructura Fruta -> 	Caracter con el que va a ser pintada la fruta.
      							N�mero de posiciones que se tiene que incrementar
                           la cola.
                           N�mero de puntos que da comerse esa fruta.

		TSerpiente 	serpiente;
      TFruta      fruta[]  = {	{0x57, 6, 2},
      									{'b', ..., ...},
                                 .
                                 .
      										};

		ENTERO SIN SIGNO tiempoHastaLaSiguienteFruta = 0;

      CAR�CTER Volante[2] -> {Car�cter para girar la serpiente a su izquierda,
      							  Car�cter para girar a la derecha}

		FINDATOS
*/

void pintadoPresentacion();
/*
	Entrada: -
   Salida : -

   Descipci�n: Leer� el archivo presentacion.txt y lo pondr� en pantalla.

*/

void felicitacion(????????????);
/*
	Entrada: ?????
   Salida : -

   Descipci�n: M�nimo descrito en la funci�n principal.

*/

void creditos(????????????);
/*
	Entrada: ?????
   Salida : -

   Descipci�n: Nombre del alumno, del profesor, de la asignatura, el centro y
   				el a�o, al menos.

*/

void pintadoPresentacion();
/*
	Entrada: -
   Salida : -

   Descipci�n: Leer� el archivo presentacion.txt y lo pondr� en pantalla.

*/


void pintadoTablero();
/*
	Entrada: -
   Salida : -

   Descipci�n: Leer� el las 25 primeras l�neas, si las hubiere, del archivo
   				pantalla.txt y las imprimir�, formando el tablero.
*/

void esperar(unsigned long int tiempo);
/*
	Entrada: Entero positivo que act�a como contador.
   Salida : -

   Descipci�n: Bucle destinado a perder el tiempo. Se apoya en la variable
   				tiempo y en la velocidad de la serpiente.
*/

void avanzarSerpiente();
/*
	Entrada: -
   Salida : -

   Descipci�n: Avanza toda la serpiente sin repintarla.

   Desde el �ltimo anillo al primero, cada anillo toma las coordenadas
   del anillo anterior.

   Avanza la cabeza de la serpiente en la direcci�n definida por avance
   1 posici�n.

*/


void mover();
/*
	Entrada: -
   Salida : -

   Descipci�n: Lazo (bucle de control) se encarga de avanzar el juego
   				paso a paso.

PROCEDIMIENTO
   VARIABLES

   	LOGICA serpienteViva = verdadero;

   FIN VARIABLES

   ALGORITMO:

   REPETIR -------------------------------------------------------------------
   Si hay alguna pulsaci�n del teclado ( kbhit() )
   	1. Cambiar la direcci�n de avance de la serpiente seg�n la tecla pulsada.
      2. Borrar el exceso de pulsaciones leyendo caracteres hasta que se
      	vac�e el buffer.

	Si la siguiente posici�n de la serpiente es distinto de la ' ' (gettext):
   	Si la siguiente posici�n es una fruta:
      	1. Incrementar la variable de la serpiente crecerCola en tantas
         	posiciones como indique la fruta (incrementando las posiciones
            que le quedan por crecer).
         2. Incremetar los puntos del usuario tanto como indique la fruta.
         3. Poner a 0 el tiempo hasta la siguiente fruta (opcional).
         4. Incrementar la velocidad por cada decena de frutas comidas.
      Si no:
      	1. El usuario se ha chocado y debe morir (cambiando su variable de
         	estado);
      Fin Si
   Fin Si.

	Si las posiciones que le quedan por crecer > 0 :
   	1. Incrementar la cola en 1 anillo.
      2. decrementar en 1 las posiciones que le quedan por crecer.

   Decrementar en 1 el tiempo hasta la siguiente fruta.
   Si el tiempo hasta la siguiente Fruta <= 0 :
   	1. Generar un tipo de fruta aleatoriamente.
      2. Generar aleatoriamente el tiempo hasta la siguiente fruta.

   avanzar la serpiente.
   Incrementar en 1 los puntos del usuario (1 definido como constante PUNTOS).
	pintar la serpiente.
   MIENTRAS (la serpiente este viva) ------------------------------------------

	FIN ALGORITMO.
FIN PROCEDIMIENTO.
*/

void iniciarVariables();
/*
	Entrada: -
   Salida : -

   Descipci�n: Establece todos los valores inciciales y reservas de memoria
   				necesarios, tales como longitud de la serpiente, velocidad.
               Esta funci�n da servicio especialmente en el caso de una nueva
               partida, cuando elimina los valores residuales de la partida
               anterior.
*/

void main();
 /*	ALGORITMO

	// Imprimir la pantalla de presentaci�n.
	// esperar un tiempo.

   //----------------- Repetir  ----------------------
   // Pintar el tablero.
   // Poner a 0 todas las variables, para comenzar una nueva partida.
   // Mover
   // Felicitar al jugador y ense�arles los puntos conseguidos.
   //-------si desean echar otra partida -------------

   // Poner los cr�ditos del juego.

 FIN ALGORITMO */