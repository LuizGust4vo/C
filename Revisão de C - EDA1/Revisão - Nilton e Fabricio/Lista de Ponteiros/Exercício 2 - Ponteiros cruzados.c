#include <stdio.h>
#include <locale.h>

// PDF: Lista de Ponteiros. Exercício 2 - Ponteiros cruzados.

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    // Dados:
    int A = 10, B = 20;
    int *p1 = &A, *p2 = &B;

    printf ("A = %d e B = %d\n", *p1, *p2);

    printf ("\n--- TROCA DOS PONTEIROS ---\n\n");

    p1 = &B; p2 = &A;

    printf ("B = %d e A = %d\n", *p1, *p2);

    return 0;
}
