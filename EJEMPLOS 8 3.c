#include <string.h>
/* Estructuras-2.
El programa muestra la manera en que se declara una estructura, así como la
➥forma en que se tiene acceso a los campos de los apuntadores de tipo estructura
➥tanto para lectura como para escritura. Se utiliza además una función que
➥recibe como parámetro un apuntador de tipo estructura. */
struct alumno /* Declaración de la estructura. */
{int matricula;
char nombre[20];
char carrera[20]; /* Campos de la estructura alumno. */
float promedio;
char direccion[20];
};
void Lectura(struct alumno *); /* Prototipo de función. */
void main(void)
{
struct alumno a0 = {120, ”María”, ”Contabilidad”, 8.9, ”Querétaro”};
struct alumno *a3, *a4, *a5, a6;
/* Observa que las variables *a3, *a4 y *a5 se declaran como apuntadores de
➥tipo estructura alumno. a6 es una variable de tipo estructura alumno. */
a3 = &a0; /* En este caso al apuntador de tipo estructura alumno a3
➥se le asigna la dirección de la variable de tipo estructura alumno, a0. */
a4 = new (struct alumno);
/* Nota que al apuntador a4 es necesario asignarle una dirección de memoria.
➥Para tener acceso a los campos de un apuntador de tipo estructura, utiliza uno
➥de los dos formatos siguientes:
apuntador->campo
o bien
(*apuntador).campo
En la lectura de los campos de la variable a4 se utilizan como ejemplo ambos
➥formatos. */
printf(”\nIngrese la matrícula del alumno 4: ”);
scanf(”%d”, &(*a4).matricula);
fflush(stdin);
printf(”Ingrese el nombre del alumno 4: ”);
gets(a4->nombre);
printf(”Ingrese la carrera del alumno 4: ”);
gets((*a4).carrera);
printf(”Ingrese promedio del alumno 4: ”);
scanf(”%f”, &a4->promedio);
fflush(stdin);
printf(”Ingrese la dirección del alumno 4: ”);
gets(a4->direccion);
a5 = new (struct alumno);
Lectura(a5); /* En este caso se pasa el apuntador de tipo estructura alumno
a5 a la función Lectura. */
Lectura(&a6); /* En este caso se pasa la variable de tipo estructura alumno a6,
➥a la función Lectura. Observa que en este caso debemos utilizar el operador de
➥dirección para preceder a la variable. */
printf(”\nDatos del alumno 3\n”);
/* Observa la forma de escribir los campos de los apuntadores de tipo
➥estructura. */
