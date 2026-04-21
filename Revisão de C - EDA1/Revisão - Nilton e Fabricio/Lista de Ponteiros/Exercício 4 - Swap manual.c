#include <stdio.h>

// PDF: Lista de Ponteiros. Exercício 4 — Swap manual (sem função).

int main ()
{
    int A = 5, B = 10;
    int *p1 = &A, *p2 = &B;

    printf ("A = %d e B = %d\n", A, B);

    // Lógica de troca sem auxiliar
    *p1 = *p1 + *p2; // A = 5 + 10 = 15
    *p2 = *p1 - *p2; // B = 15 - 10 = 5
    *p1 = *p1 - *p2; // A = 15 - 5 = 10

    printf ("\nA = %d e B = %d\n", A, B);

    return 0;
}
