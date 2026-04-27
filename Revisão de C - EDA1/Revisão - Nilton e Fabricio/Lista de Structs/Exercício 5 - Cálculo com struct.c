#include <stdio.h>
#include <locale.h>

// PDF: Lista de Structs. Exercício 5 — Cálculo com struct

typedef struct
{
    int largura, altura; // <- Declaração de dados do mesmo tipo pode ser feita assim
} Retangulo;

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    Retangulo r = {2, 5};

    printf ("Área do Retângulo: %d m^2\n", r.largura * r.altura);

    return 0;
}
