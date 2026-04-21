#include <stdio.h>

// PDF: Lista de Ponteiros. Exercício 6 — Modificação por função.

void dobra(int *x){
    *x = *x * 2;
}

int main ()
{
    int y = 3;

    dobra (&y);
    printf ("%d\n", y);

    return 0;
}
