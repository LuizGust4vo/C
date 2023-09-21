#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int n, a, b, cont1 = 1, cont2 = 1;

    printf ("Digite a altura da pirâmide: ");
    scanf ("%d", &n);

    if (n >= 1 && n <= 50)
    {
        printf ("\n-------- PIRÂMIDES --------\n\n");
        do
        {
            for (a = 1; a <= cont1; a++)
            {
                if (cont1 < 10) printf ("0%d ", cont1);
                if (cont1 >= 10) printf ("%d ", cont1);
            }
            printf ("\n");
            cont1++;
        }
        while (cont1 <= n);

        printf ("\n");

        do
        {
            for (b = 1; b <= cont2; b++)
            {
                if (b < 10) printf ("0%d ", b);
                if (b >= 10) printf ("%d ", b);
            }
            printf ("\n");
            cont2++;
        }
        while (cont2 <= n);
    }

    else
    {
        printf ("\nValor(es) inválido(s)!\n");
    }

    return 0;
}
