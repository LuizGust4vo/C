#include <stdio.h>
#include <locale.h>

// PDF: Ponteiros com Struct. Exercícios 4 - Vetor de Structs.
// Crie um vetor de 3 structs Aluno
// Use ponteiros para preencher os dados

typedef struct
{
    char nome[50];
    int matricula;
    float nota;
} aluno;

int main ()
{
    setlocale (LC_ALL, "Portuguese");

/* ----- INSERÇÃO DOS DADOS NA INICIALIZAÇÃO DA STRUCT -----
    aluno aluno1[3] = {
    "Luiz Gustavo", 221, 7.5,
    "Eduardo Ferreira", 222, 6.0,
    "Eric Silveira", 223, 8.5};
*/

    aluno aluno1[3];
    for (int cont = 0; cont <= 2; cont++){
    aluno *p = &aluno1[cont];

// ----- INSERÇÃO DE DADOS PELO USUÁRIO -----
    printf ("Digite o nome do aluno: ");
    scanf ("%s", p -> nome);
    printf ("Digite a matrícula: ");
    scanf ("%d", &p -> matricula);
    printf ("Digite a nota: ");
    scanf ("%f", &p -> nota);
    printf ("\n");
    }

    for (int cont = 0; cont <= 2; cont++){
    aluno *p = &aluno1[cont];
    printf ("Nome: %s\nMatrícula: %d\nNota: %.1f\n\n", p -> nome, p -> matricula, p -> nota); // Impressão pelo ponteiro
    }

    return 0;
}
