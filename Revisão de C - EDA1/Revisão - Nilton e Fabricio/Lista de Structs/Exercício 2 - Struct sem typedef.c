#include <stdio.h>
#include <string.h>

// PDF: Lista de Structs. Exercício 2 — Struct sem typedef.

struct aluno
{
    char nome[50];
    int idade;
    float nota;
} aluno1;

int main ()
{
    strcpy (aluno1.nome, "Luiz");
    aluno1.idade = 22;
    aluno1.nota = 10.0;

    printf ("Nome: %s\nIdade: %d\nNota: %.1f\n", aluno1.nome, aluno1.idade, aluno1.nota);

    return 0;
}
