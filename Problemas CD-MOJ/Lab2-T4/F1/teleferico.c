#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int capacidade, alunos, viagens, E;

    printf ("Capacidade da cabine: ");
    scanf ("%d", &capacidade);

    printf ("Número total de alunos: ");
    scanf ("%d", &alunos);

    if (capacidade >= 2 && capacidade <= 100 && alunos >= 1 && alunos < 1000)
    {
        viagens = alunos / (capacidade - 1);
        if (alunos % (capacidade - 1) == 0)
        {
            printf ("\nNúmero de viagens = %d\n", viagens);
        }
        else if (alunos % (capacidade -1) != 0)
        {
            printf ("\nNúmero de viagens = %d\n", viagens + 1);
        }
    }
    else
    {
        printf ("\nValor(s) inválido(s)!\n");
    }

    return 0;
}
