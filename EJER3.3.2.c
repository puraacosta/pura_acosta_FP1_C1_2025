#include <stdio.h>
/* Suma positivos.
El programa, al recibir como datos N números enteros, obtiene la suma de los
➥enteros positivos.
I, N, NUM, SUM: variables de tipo entero. */
void main(void)
{
int I, N, NUM, SUM;
SUM = 0;
printf(“Ingrese el número de datos:\t”);
scanf(“%d”, &N);
for (I=1; I<=N; I++)
{
printf(“Ingrese el dato número %d:\t”, I);
scanf(“%d”, &NUM);
if (NUM > 0)
SUM = SUM + NUM;
}
printf(“\nLa suma de los números positivos es: %d”, SUM);
}/* Estructura repetitiva while.
El conjunto de instrucciones muestra la sintaxis de la estructura while en el
➥lenguaje C. */
. . .
PI = proposición inicial;
while (PI) /* PI debe tener un valor verdadero para que el ciclo se
➥ejecute */
{ proceso; /* cuerpo de la estructura while */
. . .
PI = modificación de PI;
. . .
}
