#include <stdio.h>

// PDF: Lista de Ponteiros. Exercício 5 — Vetor com ponteiros.

int main ()
{
    int v[5] = {10, 20, 30, 40, 50}, *p, soma = 0;

    for (p = v; p < v + 5; p++){
        printf ("%d ", *p);
        soma += *p;
    }

    printf ("\n\nSoma = %d\n", soma);

    return 0;
}
