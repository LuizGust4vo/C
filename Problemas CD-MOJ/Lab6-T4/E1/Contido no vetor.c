#include <stdio.h>

int main ()
{
    int T, x, cont2 = 0;

    scanf ("%d", &T);
    int v1[T];

    for (int cont = 0; cont < T; cont++)
    {
        scanf ("%d", &v1[cont]);
    }

    scanf ("%d", &x);

    for (int cont1 = 0; cont1 < T; cont1++)
    {
        if (v1[cont1] == x) printf ("pertence");
        if (v1[cont1] != x) cont2++;
        if (cont2 == T) printf ("nao pertence");
    }

    return 0;
}
