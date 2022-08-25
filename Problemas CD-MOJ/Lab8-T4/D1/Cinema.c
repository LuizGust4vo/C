#include <stdio.h>

int main ()
{

    int lfileira, clugares, linhas = 0;
    char alf[20] = {"ABCDEFGHIJKLMNOPQRST"};

    scanf ("%d %d", &lfileira, &clugares);
    char bilhetes [lfileira][clugares];
    char cinema [lfileira][clugares];

    //while (scanf ("%s", bilhetes[linhas]) != EOF){
    //linhas++;
    //}

    for (int l = 0; l < lfileira; l++){
    for (int c = 0; c < clugares; c++){
    cinema [l][c] = '--';
    printf ("%", cinema [l][c]);
    }
    printf ("\n");
    }

 /*   for (int l = 0; l < lfileira; l++)
    {
        if (lfileira < 10) printf ("  0%d", l + 1);
        else printf ("%d ", l + 1);
    }
    for (int c = (clugares - 1); c >= 0; c--)
    {
        printf ("\n%c", alf[c]);
    }
    */

    return 0;
}
