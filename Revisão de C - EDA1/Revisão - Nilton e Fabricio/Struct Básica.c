#include <stdio.h>

// PDF: Ponteiros com Struct. Exercícios 1 e 2, Struct Básica e acesso com Ponteiro.
// Declare uma struct Livro com os campos: titulo (string); autor (string); ano (inteiro). Preencha os campos de uma variável livro1 e imprima os dados.
// Crie um ponteiro para a struct Livro; Use -> para acessar e imprimir os campos.

typedef struct
{
    char titulo[50];
    char autor[50];
    int ano;
} livro;

int main ()
{
    livro livro1 = {"Aventuras de Catan", "L, F, Y & P", 2026};
    livro *ptr = &livro1;

    printf ("Título: %s\nAutores: %s\nAno: %d\n", livro1.titulo, livro1.autor, livro1.ano);
    printf ("\nTítulo: %s\nAutores: %s\nAno: %d\n", ptr->titulo, ptr->autor, ptr->ano);

    return 0;
}
