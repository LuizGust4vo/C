#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int n = 0, soma1 = 0, soma2 = 0;

    if (n == 0)
    {
        do
        {
            printf ("Digite um número: ");
            scanf ("%d", &n);
            if (n % 2 == 0) soma1 += n;
            if (n % 2 != 0) soma2 += n;
        }
        while (n != 0);
    }

    printf ("\nSoma dos números pares digitados: %d", soma1);
    printf ("\nSoma dos números ímpares digitados: %d\n", soma2);

    return 0;
}
