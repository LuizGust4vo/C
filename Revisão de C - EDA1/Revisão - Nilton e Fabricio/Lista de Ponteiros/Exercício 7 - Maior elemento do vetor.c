#include <stdio.h>
#include <locale.h>

// PDF: Lista de Ponteiros. Exercício 7 — Maior elemento do vetor.

int maior (int *v, int tamanho)
{
    int *p, m = 0;

    for (p = v; p < v + tamanho; p++)      // v = &v[0] -> Para inicializar o vetor
    {
        if (*p > m) m = *p;
    }
    return m;
}

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    int v[4] = {4, 3, 2, 1}, t = 4;

    printf ("Maior número do vetor = %d\n", maior (v, t));

    return 0;
}
