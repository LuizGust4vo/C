#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale (LC_ALL, "");

    int A, B, C;

    printf ("----- Zerinho ou... Um! -----\n\n");
    scanf ("%d%d%d", &A, &B, &C);

    if (A == 0 || A == 1 )
    {
        if (B == 0 || B == 1)
        {
            if (C == 0 || C == 1)
            {
                if (A != B && A != C)
                {
                    printf ("\nA\n");
                }
                else if (B != A && B != C)
                {
                    printf ("\nB\n");
                }
                else if (C != A && C != B)
                {
                    printf ("\nC\n");
                }
                else if (A == B && B == C)
                {
                    printf ("\nEmpate!\n");

                }
            }
        }
    }

    if (A != 0 || A != 1 || B != 0 || B != 1 || C != 0 || C != 1)
    {
        printf ("\nValor(es) inválido(s)!\n");
    }



    return 0;
}
