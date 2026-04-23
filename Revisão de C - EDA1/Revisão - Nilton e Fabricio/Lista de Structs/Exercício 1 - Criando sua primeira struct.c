#include <stdio.h>
#include <locale.h>

// PDF: Lista de Structs. Exercício 1 — Criando sua primeira struct.

typedef struct
{
    char marca [50];
    int ano;
    float preco;
} carro;


int main ()
{
    setlocale (LC_ALL, "Portuguese");
    carro car1 = {"Renult", 2012, 20.000}, *p = &car1;

    printf ("Marca: %s\nAno: %d\nPreço: R$ %.2f", p -> marca, p -> ano, p -> preco);

    return 0;
}
