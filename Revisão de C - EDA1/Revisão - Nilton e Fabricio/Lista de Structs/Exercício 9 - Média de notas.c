#include <stdio.h>
#include <string.h>
#include <locale.h>
#define T 5

// PDF: Lista de Structs. Exercício 9 - Média de notas

typedef struct
{
    char nome[64];
    float nota;
} Aluno;

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    Aluno alunos [T];
    float soma = 0.0;

    for (int cont = 0; cont < T; cont++)
    {
        printf ("Digite a nota do aluno %d: ", cont + 1);
        scanf ("%f", &alunos[cont].nota);
        soma += alunos[cont].nota;
    }

    printf ("\nMédia dos alunos %.2f.\n", soma / 5);

    return 0;
}
