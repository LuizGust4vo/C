#include <stdio.h>

int main ()
{

    int v1[1000], v2[1000], a[1000], b[1000];
    int sa[1000], sb[1000], cont = 0, v[1000];

    do
    {
        scanf ("%d", &v1[cont]);

        for (int cont1 = 0; cont1 < v1[cont]; cont1++)
        {
            scanf ("%d %d", &a[cont1], &b[cont1]);
            sa[cont] = sa[cont] + a[cont1];
            sb[cont] = sb[cont] + b[cont1];
        }
        if (sa[cont] > sb[cont])
        {
            v[cont] = 1;
        }
        else if (sb[cont] > sa[cont])
        {
            v[cont] = 2;
        }

        cont++;
    }
    while (v1[cont-1] != 0);

    for (int cont2 = 0; cont2 < cont - 1; cont2++)
    {
        printf ("Teste %d\n", cont2 + 1);
        if (v[cont2] == 1) printf ("Aldo\n");
        if (v[cont2] == 2) printf ("Beto\n");
    }

    return 0;
}
