#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int R, a = 0, b = 0, m1 = 1000, m2 = 1000, m3 = 1000, c, n;

    for (int cont = 1; cont <= 3; cont++)
    {
        printf ("\nDigite a quantidade de restaurantes: ");
        scanf ("%d", &R);

        for (int cont1 = 1; cont1 <= R; cont1++)
        {
            printf ("Digite o código e a nota do restaurante: ");
            scanf ("%d %d", &c, &n);
            if (n >= a)
            {

                if (cont == 1 && m1 > c)
                {
                    m1 = c;
                    a = n;
                }

                else if (cont == 2 && m2 > c)
                {
                    m2 = c;
                    a = n;
                }

                else if (cont == 3 && m3 > c)
                {
                    m3 = c;
                    a = n;
                }

            }
        }

        a = 0;
    }

    printf ("\nDia 1");
    printf ("\nMelhor restaurante: %d\n", m1);

    printf ("\nDia 2");
    printf ("\nMelhor restaurante: %d\n", m2);

    printf ("\nDia 3");
    printf ("\nMelhor restaurante: %d\n", m3);


    return 0;
}
printf ("\nDia %d\n", cont2);
printf ("Código do restaurante %d: %d \n", cont2, melhor[cont2]);
}}

return 0;
}
