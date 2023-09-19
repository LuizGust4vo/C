#include <stdio.h>

int main ()
{

    int n, v[10000];

    scanf ("%d", &n);

    for (int cont = 0; cont < n; cont++)
    {
        scanf ("%d", &v[cont]);
    }

    for (int cont1 = 0; cont1 < n; cont1++)
    {
        if (v[cont1] % 2 == 0) printf ("%d ", cont1);
        }

    printf ("\n");

    for (int cont2 = 0; cont2 < n; cont2++)
    {
        if (v[cont2] % 2 != 0) printf ("%d ", cont2);
        }

    printf ("\n");

    return 0;
}
