#include <stdio.h>

int par (char s[], int cont, int resultado)
{
    if (s[cont + 2] == '\0')
    {
        return resultado;
    }

    if ((int)s[cont] == (int)s[cont + 2])
    {
        resultado++;
    }
    return par(s, cont + 1, resultado);
}

int main ()
{0
    char str[250];

    scanf ("%s", &str);

    int pares = par (str, 0, 0);

    printf ("%d\n", pares);

    return 0;
}
