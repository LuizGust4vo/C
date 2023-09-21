#include <stdio.h>

int main ()
{

    int c[5], contC = 0, contD = 0;

    for (int cont = 0; cont <= 4; cont++)
    {
        scanf ("%d", &c[cont]);
    }

    if (c[1] > c[0])
    {
        for (int cont1 = 1; cont1 <= 4; cont1++)
        {
            if (c[cont1] > c[cont1-1]) contC++;
        }
    }

    else
    {
        for (int cont2 = 1; cont2 <= 4; cont2++)
        {
            if (c[cont2] < c[cont2-1]) contD++;
        }
    }

    if (contC == 4)
    {
        printf ("C\n");
    }

    else if (contD == 4)
    {
        printf ("D\n");
    }

    else
    {
        printf ("N\n");
    }

    return 0;
}
