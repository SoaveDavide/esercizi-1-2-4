#include <stdio.h>
#include <limits.h>
int main(int argc, char *argv[])
{
    /*Progettare un algoritmo che risolva il seguente problema. Si richieda
all’utente di inserire una serie di terne di dati numerici (A, B, C).
Il programma deve terminare quando uno dei valori inseriti è minore di
zero. Si scartino le terne nelle quali i valori non sono in ordine
strettamente crescente, ovvero quelle terne per cui non valga A < B < C.
Su tutte le terne non scartate si calcoli il massimo e il minimo dei
valori inseriti. Si stampino a video tali valori massimi e minimi prima
di terminare il programma.*/
float A,B,C,massimo=0,minimo=0;
do {
    printf("Inserire il primo valore\n");
    scanf ("%f", & A);
    printf("Inserire il secondo valore\n");
    scanf ("%f", & B);
    printf("Inserire il terzo valore\n");
    scanf ("%f", & C);
    if (A<B&&B<C) {
        massimo = C;
        minimo= A;
    }
    
    } while (A>=0 || B>=0 || C>=0);
printf("Il numero massimo è: %f\n",massimo);
printf("Il numero minimo è: %f\n",minimo);

}