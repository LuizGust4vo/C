#include <stdio.h>
#define t 4

// PDF: Lista de Ponteiros. Exercício 9 — Inversão de vetor (in-place).
// AUTOR: Linus

void inverte (int *v, int tamanho)
{

    int *aa, *bb = &v[tamanho - 1];

    for (aa = v; aa != v + tamanho / 2; aa++, bb--)
    {
        *aa = *aa + *bb;
        *bb = *aa - *bb;
        *aa = *aa - *bb;
    }
}

int main()
{
    int v[t] = {1, 2, 3, 4};

    inverte (v, t);

    for (int i = 0; i < t; i++)
    {
        printf ("%d ", v[i]);
    }
    printf ("\n");

    return 0;
}

/*
a = 5 e b = 10

a = a + b = 15
b = a - b = 5
a = a - b = 10
*/
