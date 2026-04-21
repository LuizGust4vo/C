#include <stdio.h>
#include <locale.h>

// PDF: Lista de Ponteiros. Exercício 1 - Inspeção de memória.

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    int n1 = 2, *p1 = &n1;
    float n2 = 10.53, *p2 = &n2;

    printf ("Inteiro: %d\nFloat: %.2f\n", *p1, *p2);

    return 0;
}
