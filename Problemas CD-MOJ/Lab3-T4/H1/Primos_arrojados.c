#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int testes, n, cont1 = 0;

    printf ("Digite o número de casos testes: ");
    scanf ("%d", &testes);

    for (int cont = 0; cont < testes; cont++)
    {
        printf ("\nDigite um número: ");
        scanf ("%d", &n);

        for (int a = 1; a <= n; a++)
        {
            if (n % a == 0) cont1++;
        }

        if (cont1 != 2)
        {
            printf ("N\n");
            cont1 = 0;
        }

        else if (cont1 == 2)
        {
            cont1 = 0;
            if (n < 10)
            {
                printf ("S\n");
                cont1 = 0;
            }
            else if (n >= 11)
            {
                do
                {
                    cont1 = 0;
                    n = n / 10;
                    for (int a = 1; a <= n; a++)
                    {
                        if (n % a == 0) cont1++;
                    }
                }
                while (n >= 10);
                if (cont1 == 2)
                {
                    printf ("S\n");
                    cont1 = 0;
                }
                else
                {
                    printf ("N\n");
                    cont1 = 0;
                }
            }
        }
    }

    return 0;
}
