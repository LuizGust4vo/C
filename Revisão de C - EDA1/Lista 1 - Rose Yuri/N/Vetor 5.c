#include <stdio.h>

int main ()
{

    int tamanho, v[10000], x, a = 0;

    scanf ("%d", &tamanho);

    for (int cont = 0; cont < tamanho; cont++)
    {
        scanf ("%d", &v[cont]);
    }

    scanf ("%d", &x);

    for (int cont1 = 0; cont1 < tamanho; cont1++)
    {
        if (v[cont1] == x) a++;
    }

    if (a == 1)
    {
        printf ("pertence\n");
    }

    else
    {
        printf ("nao pertence\n");
    }

    return 0;
}
