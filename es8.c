#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) 
{
    /*Progettare un algoritmo che risolve il seguente problema. Si desidera 
    calcolare la somma delle radici quadrate di N valori numerici inseriti 
    dall’utente, con N inserito in input. 
    L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
    con un messaggio di errore quando viene inserito un numero che non
    permette di effettuare il calcolo (nel dominio dei numeri reali).*/
    int N,numero,somma=0;
    do {
        printf("Quanti numeri vuoi inserire?\n");
        scanf("%d", &N);
        if (N<=0) {
            printf("Il numero inserito non è valido\n");
        }
    } while (N<=0);
    for (int i=0; i<N; i++) {
        if (numero>0) 
        {
            printf ("Inserire un numero");
        scanf ("%d", &numero);
        somma = somma+sqrt(numero);
        } else {
            printf("Numero inserito non valido");
            i--;
        }
        
        
    }
     printf("La somma vale: %d", somma);
    }