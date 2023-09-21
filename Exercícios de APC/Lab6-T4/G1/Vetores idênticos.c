#include <stdio.h>

int main ()
{

    int T;

    scanf ("%d", &T);
    int v1[T], v2[T], cont1 = 0, cont2 = 0;

    for (int cont = 0; cont < T; cont++)
    {
        scanf ("%d", &v1[cont]);
    }

    for (int cont = 0; cont < T; cont++)
    {
        scanf ("%d", &v2[cont]);
    }

    for (int cont = 0; cont < T; cont++)
    {
        if (v1[cont] == v2[cont])
        {
            cont1++;
            if (cont1 == T) printf ("sim");
        }
        if (v1[cont] != v2[cont]) cont2++;
    }
    if (cont2 >= 1) printf ("nao");

    return 0;
}
