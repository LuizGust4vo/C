#include <stdio.h>
#include <string.h> // Adiciona ferramentas para trabalhar com arrays de caracteres (já que não existe strings nativas em C)

// PDF: Lista de Structs. Exercício 10 — Cadastro de pessoa

typedef struct
{
    char nome[64];
    int idade;
} Pessoa;

int main ()
{
    Pessoa p;

    printf ("Digite o nome: ");
    // DESAFIO EXTRA - fgets:
    fgets (p.nome, sizeof (p.nome), stdin); // Forma mais segura e recomendada de ler strings (ao invés de scanf ("%d", &p.idade);)
    p.nome [strcspn(p.nome, "\n")] = '\0';  // Forma eficiente de remover o \n do final da string

    printf ("Digite a idade: ");
    scanf ("%d", &p.idade);

    printf ("\nNome: %s\nIdade: %d\n", p.nome, p.idade);


    return 0;
}
