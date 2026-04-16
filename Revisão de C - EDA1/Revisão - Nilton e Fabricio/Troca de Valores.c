#include <stdio.h>
#include <locale.h>

// PDF: Ponteiros.
// Exemplo 2: Troca de Valores.
// Faça uma função para trocar o valor de duas variáveis float.

void trocaValores (float *ptr1, float *ptr2)
{
    float aux = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = aux;
}

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float a = 3.14, b = 7.27;

    printf ("Váriável A: %.2f \nVariável B: %.2f\n", a, b);
    printf ("\n----- TROCA DE VALORES -----\n");
    trocaValores (&a, &b);
    printf ("\nVáriável A: %.2f \nVariável B: %.2f\n", a, b);

// Inicializar ponteiros antes de usá-los! Não tentar acessar áreas de memória não alocadas!

    return 0;

}
