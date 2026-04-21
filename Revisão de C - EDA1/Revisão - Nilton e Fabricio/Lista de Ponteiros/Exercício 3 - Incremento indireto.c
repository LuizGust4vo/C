#include <stdio.h>
#include <locale.h>

// PDF: Lista de Ponteiros. Exercício 3 — Incremento indireto.

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    int n = 1, *p = &n;

    *p = (n + 5) * 2;

    printf ("Valor de n = %d\n", n);

    return 0;
}
