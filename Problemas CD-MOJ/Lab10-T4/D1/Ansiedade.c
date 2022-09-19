#include <stdio.h>
#include <string.h>

int main ()
{

    int l = 0, a, b = 0, c = 10, d = 0, cont1 = 0;
    char formulario[10000][10], sim[4] = "sim";

    while (scanf ("%s", formulario[l]) != EOF)
    {
        l++;
    }
    a = l / 10;

    for (int cont2 = 0; cont2 <= a; cont2++)
    {
        for (int cont = b; cont < c; cont++)
        {
            if (strcmp (formulario[cont], sim) == 0) cont1++;
        }
        if (cont2 < a)
        {
            b = c;
            c = c + 10;
        }
        if (cont1 >= 2) d++;
        cont1 = 0;
    }

    if (d >= 1)
    {
        printf ("%d", d);
    }

    else
    {
        printf ("0");
    }

    return 0;
}
