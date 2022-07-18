#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int N, cont = 1;

    printf ("Quantidade de linhas com batidas: ");
    scanf ("%d", &N);

    do{
    if (cont % 2 != 0) printf ("\nTHUMS THUMS THUMS");
    if (cont % 2 == 0) printf ("\nTHUMS THUMS THUMS THUMS THUMS THUMS");
    cont++;
    } while (cont <= N);

    return 0;
}
