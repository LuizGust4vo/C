#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int n = 0, soma = 0;

    if (n == 0)
    {
        do
        {
            printf ("Digite um número: ");
            scanf ("%d", &n);
            if (n % 2 == 0) soma += n;
        }
        while (n != 0);
    }

    printf ("\nSoma dos números pares digitados: %d\n", soma);

    return 0;
}
