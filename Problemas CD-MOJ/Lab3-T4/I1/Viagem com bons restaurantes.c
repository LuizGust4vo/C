#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int d, r, c, n, a = 0;

    printf ("Digite quantos dias de viagem: ");
    scanf ("%d", &d);
    int v1[d], v2[d], vc[d];

    for (a = 0; a < d; a++) v2[a] = 0;

    for (int cont = 0; cont < d; cont++)
    {
        printf ("Digite quantos restaurantes existem na cidade: ");
        scanf ("%d", &r);

        for (int cont1 = 0; cont1 < r; cont1++)
        {
            printf ("Digite o código e a nota do restaurante: ");
            scanf ("%d %d", &c, &v1[cont]);

            if (v1[cont] > v2[cont])
            {
                vc[cont] = c;
                v2[cont] = v1[cont];
            }

            else if (v1[cont] == v2[cont])
            {
                if (c < vc[cont]) vc[cont] = c;
                if (c > vc[cont]) vc[cont] = vc[cont];
            }

        }
    }

    for (int cont = 0; cont < d; cont++)
    {
        printf ("\nDia %d", cont +1);
        printf ("\nCódigo do melhor restaurantes: %d", vc[cont]);
    }


    return 0;
}
