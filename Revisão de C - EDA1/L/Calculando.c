#include <stdio.h>

int main ()
{

    int v1[10000], v2[10000], soma[10000];
    int cont = 0;

    do
    {
        scanf ("%d", &v1[cont]);

        for (int cont1 = 0; cont1 < v1[cont]; cont1++)
        {
            scanf ("%d", &v2[cont1]);
            soma[cont] = soma[cont] + v2[cont1];
        }
        cont++;
    }
    while (v1[cont - 1] != 0);

    for (int cont2 = 0; cont2 < cont - 1; cont2++)
    {
        printf ("Teste %d\n", cont2 + 1);
        printf ("%d\n", soma[cont2]);
        printf ("\n");
    }

    return 0;
}
