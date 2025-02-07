#include <stdio.h>

/* incremento de precio.
el programa al recibir datos como dato el precio de un producto, incrementa al
mismo 11% si este es inferior a 1500$
PRE Y NPR: son variable de tipo reasl. */

void main (void)
{
float PRE, NPR;

printf("Ingrese un dato: ");
scanf ("%F" , &PRE);
if (PRE < 1500){
        NPR = PRE * 1.11;
printf("\n nuevo precio: %7 .2f", NPR);
}
}
