#include <stdio.h>
int main(int argc, char *argv[])
{
    /*Progettare un algoritmo che effettui le seguenti operazioni:
    • legga da tastiera una coppia di valori interi A e B con A<B;
    • continui a leggere da tastiera una serie di valori interi, terminando
    quando il valore letto è al di fuori dell’intervallo [A, B];
    • conteggi la media dei valori letti;
    • prima di terminare, stampi il valore calcolato.*/
    int A, B, contatore = 0, somma = 0, numero;
    double media = 0;
    do
    {
        printf("Inserisci il primo numero\n");
        scanf("%d", &A);
        printf("Inserisci il secondo numero\n");
        scanf("%d", &B);
        if (B <= A)
        {
            printf("Valori non validi reinserirli\n");
        }
    } while (B <= A);
    do
    {
        printf("inserisci un numero\n");
        scanf("%d", &numero);

        if (numero >= A && numero <= B)
        {
            somma = somma + numero;
            contatore++;
            media=somma/contatore;
        }

    } while (numero >= A && numero <= B);
    printf("La media risulta %f\n", media);
    return 0;
}