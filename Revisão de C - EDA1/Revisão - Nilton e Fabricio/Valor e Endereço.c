#include <stdio.h>
#include <locale.h>

// PDF: Ponteiros.
// Exemplo 1: Valor e Endereço de uma Variável.

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int numero = 79417;
    int *ptr;

    ptr = &numero;
    *ptr = 90560;

    printf ("Número: %d\n", *ptr);

    printf ("Endereço de memória: %p\n", ptr);

    return 0;
}

