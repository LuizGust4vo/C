#include <stdio.h>

int main ()
{

    int leituras, capacidade, pessoas = 0;
    int sair[1000], entrar[1000], p = 0;

    scanf ("%d %d", &leituras, &capacidade);

    for (int cont = 0; cont < leituras; cont++)
    {
        scanf ("%d %d", &sair[cont], &entrar[cont]);
        pessoas = pessoas - sair[cont] + entrar[cont];
        if (pessoas > capacidade) p++;
    }

    if (p > 0)
    {
        printf ("S\n");
    }

    else
    {
        printf ("N\n");
    }

    return 0;
}
