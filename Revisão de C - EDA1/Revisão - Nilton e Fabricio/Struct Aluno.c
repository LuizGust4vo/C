#include <stdio.h>
#include <locale.h>

// PDF: Ponteiros com Struct. Exercício 3 - Struct Aluno.
// Crie a struct Aluno
// Atribua valores a uma variável
// Use ponteiros para acessar e imprimir os dados

typedef struct
{
    char nome [50];
    int matricula;
    float nota;
} aluno;

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    aluno aluno1 = {"Luiz Gustavo", 221022669, 10.0};
    aluno *p = &aluno1;

    printf ("Nome: %s\nMatrícula: %d\nNota: %.1f\n", aluno1.nome, aluno1.matricula, aluno1.nota); // Impressão pela struct
    printf ("\nNome: %s\nMatrícula: %d\nNota: %.1f\n", p -> nome, p -> matricula, p -> nota); // Impressão pelo ponteiro

    return 0;
}
