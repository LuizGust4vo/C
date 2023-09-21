#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int A, B;

    printf ("Valor escolhido pelo jogador A: ");
    scanf ("%d", &A);
    printf ("Valor escolhido pelo jogador B: ");
    scanf ("%d", &B);

    if (A >= 0 && B >= 0 && A <= 4 && B <= 4)
    {
        if (A == B)
        {
            printf ("\nEmpate!\n");
        }

        else if (A == 0 && B == 3)
        {
            printf ("\nA\n");
        }
        else if (A == 0 && B == 2)
        {
            printf ("\nA\n");
        }

        else if (B == 0 && A == 3)
        {
            printf ("\nB\n");
        }
        else if (B == 0 && A == 2)
        {
            printf ("\nB\n");
        }

        else if (A == 1 && B == 4)
        {
            printf ("\nA\n");
        }
        else if (A == 1 && B == 0)
        {
            printf ("\nA\n");
        }

        else if (B == 1 && A == 4)
        {
            printf ("\nB\n");
        }
        else if (B == 1 && A == 0)
        {
            printf ("\nB\n");
        }

        else if (A == 2 && B == 3)
        {
            printf ("\nA\n");
        }
        else if (A == 2 && B == 1)
        {
            printf ("\nA\n");
        }

        else if (B == 2 && A == 3)
        {
            printf ("\nB\n");
        }
        else if (B == 2 && A == 1)
        {
            printf ("\nB\n");
        }

        else if (A == 3 && B == 1)
        {
            printf ("\nA\n");
        }
        else if (A == 3 && B == 4)
        {
            printf ("\nA\n");
        }

        else if (B == 3 && A == 1)
        {
            printf ("\nB\n");
        }
        else if (B == 3 && A == 4)
        {
            printf ("\nB\n");
        }

        else if (A == 4 && B == 0)
        {
            printf ("\nA\n");
        }
        else if (A == 4 && B == 2)
        {
            printf ("\nA\n");
        }

        else if (B == 4 && A == 0)
        {
            printf ("\nB\n");
        }
        else if (B == 4 && A == 2)
        {
            printf ("\nB\n");
        }
    }
    else
    {
        printf ("\nValor(es) inválido(s)!\n");
    }

    return 0;
}
