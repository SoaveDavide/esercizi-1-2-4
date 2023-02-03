#include <stdio.h>

int main(int argc, char *argv[])
{
    /*Progettare un algoritmo che effettui le seguenti operazioni:

    • continui a leggere da tastiera una serie di terne di valori interi A ,
    B e C finchè non vengono inseriti dei valori tali per cui A + B < C
    • conteggi il numero di volte in cui la differenza tra A e B è pari, dispari, e quando è nulla
    • prima di terminare, visualizzi il valore dei valori conteggiati */
    int a, b, c, contaPari = 0, contaDispari = 0, contaNulla = 0;
    do
    {
        printf("Inserisci il primo numero\n");
        scanf("%d", &a);
        printf("Inserisci il secondo numero\n");
        scanf("%d", &b);
        printf("Inserisci il terzo numero\n");
        scanf("%d", &c);
        if (a - b % 2 == 0)
        {
            contaPari++;
        }
        else
        {
            if (a - b % 2 == 1)
            {
                contaDispari++;
            }
            else
            {
                contaNulla++;
            }
        }

    } while (a + b >= c);
    scanf ("I valori conteggiati dispari sono:%d", contaDispari);
    scanf ("I valori conteggiati nulli sono:%d", contaNulla);
    scanf ("I valori conteggiati pari sono:%d", contaPari);
}
