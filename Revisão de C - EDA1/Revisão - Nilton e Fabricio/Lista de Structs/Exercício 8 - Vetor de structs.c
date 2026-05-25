#include <stdio.h>
#include <locale.h>
#include <string.h>
#define T 3

// PDF: Lista de Structs. Exercício 8 — Vetor de structs

typedef struct
{
    char nome[64];
    float altura;
} Pessoa;

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    Pessoa pessoa[T];

    strcpy (pessoa[0].nome, "Rodrigo");
    pessoa[0].altura = 2.40;

    strcpy (pessoa[1].nome, "Gustavo");
    pessoa[1].altura = 1.75;

    strcpy (pessoa[2].nome, "João");
    pessoa[2].altura = 1.84;

    printf ("NOME | ALTURA\n\n");
    for (int cont = 0; cont < T; cont++){
        printf ("%s | %.2fm\n", pessoa[cont].nome, pessoa[cont].altura);
    }

    return 0;
}
