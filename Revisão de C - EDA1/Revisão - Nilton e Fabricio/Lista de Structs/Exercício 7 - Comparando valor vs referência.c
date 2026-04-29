#include <stdio.h>
#include <locale.h>
#include <string.h>

// PDF: Lista de Structs. Exercício 7 - Comparando valor vs referência.

typedef struct
{
    char nome[64];
    float altura;
} Pessoa;

void altura1 (Pessoa pessoa1) // Função que recebe Pessoa por valor
{
    pessoa1.altura = 1.85;
}   // As alterações feitas na cópia (pessoa1.altura) da variável original (p1.altura) não alteram a original

void altura2 (Pessoa *pessoa2) // Função que recebe Pessoa por referência
{
    pessoa2 -> altura = 1.80;
}   // A cópia (pessoa2 -> altura) recebe o endereço da variável original (p2.altura), permitindo alterar com sucesso

int main ()
{
    Pessoa p1;

    strcpy (p1.nome, "Luiz Gustavo");
    p1.altura = 1.75;

    printf ("Nome: %s\nAltura: %.2fm\n", p1.nome, p1.altura);
    altura1 (p1);
    printf ("\nNome: %s\nAltura: %.2fm\n", p1.nome, p1.altura);


    Pessoa p2;

    strcpy (p2.nome, "Luiz Guilherme");
    p2.altura = 1.70;

    printf ("\n\nNome: %s\nAltura: %.2fm\n", p2.nome, p2.altura);
    altura2 (&p2);
    printf ("\nNome: %s\nAltura: %.2fm\n", p2.nome, p2.altura);

    return 0;
}
