#include <stdio.h>
void main()
{
    /*Progettare un algoritmo che effettui la lettura da tastiera di una serie
    di coppie di valori numerici reali (sia positivi che negativi che zero).
    Per ciascuna coppia, l’algoritmo deve calcolare e stampare il valore
    della radice quadrata del rapporto tra il valore maggiore e quello
    minore dei due. Il programma termina quando vengono inseriti dei valori
    che non permettono di svolgere il calcolo nel dominio dei numeri reali.
    Prima di terminare si richiede di stampare un messaggio che indichi la
    ragione per cui non è stato possibile svolgere il calcolo.*/
    float num1, num2, somma = 0, prodotto = 0, Radice = 0;
    do
    {
        printf("Inserire numero 1\n");
        scanf("%f", &num1);
        printf("Inserire numero 2\n");
        scanf("%f", &num2);
        prodotto = num2 * num1;
        if (num1 > num2)
        {

            Radice = (double)num1 / (double)num2;
        }
        else
        {
            Radice = (double)num2 / (double)num1;
        }
        printf("La radice dei numeri risulta:%f\n", Radice);
    } while (Radice > 0);
        printf("Non è possibile svolgere il calcolo perché il rapporto risulta fuori dal dominio dei numeri reali");
        
    return 0;
}