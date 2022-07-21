#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int t, n, a, cont1 = 0, cont2 = 0;

    printf ("Digite a quantidade de linhas: ");
    scanf ("%d", &t);
    printf ("\n");

    do
    {
        printf ("Digite um número: ");
        scanf ("%d", &n);

        for (a = 1; a <= n; a++)
        {
            if (n % a == 0)
                cont1++;
        }

        if (cont1 == 2)
        {
            if (n < 10)
            {
                printf ("S\n");
            }

            else if (n >= 10 && n <= 9999999)
            {
                do
                {
                    cont1 = 0;
                    n /= 10;
                    for (a = 1; a <= n ; a++)
                    {
                        if (n % a == 0)
                            cont1++;
                    }

                } while (n > 10);

                    if (cont1 == 2)
                    {
                        printf ("S\n");
                    }
                    else {
                        printf ("N\n");
                    }
            }
        }

        else
        {
            printf ("N\n", n);
        }
        cont1 = 0;
        cont2++;
        printf ("\n");
    }
    while (cont2 < t);

    return 0;
}
