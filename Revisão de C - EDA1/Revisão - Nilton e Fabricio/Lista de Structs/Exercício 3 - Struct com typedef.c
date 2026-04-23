#include <stdio.h>
#include <string.h>
#include <locale.h>

// PDF: Lista de Structs. Exercício 3 — Struct com typedef.

typedef struct
{
    char nome[32];
    float preco;
} produto;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    produto pNome, pPreco;
    strcpy (pNome.nome, "Joia");
    pPreco.preco = 100.00;

    printf ("Produto: %s\nPreço R$ %.2f\n", pNome.nome, pPreco.preco);

    return 0;
}
