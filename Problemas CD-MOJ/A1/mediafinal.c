#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float P1, P2, P3; // Notas das provas
    float L1, L2, L3, L4, L5; // Nota das listas
    float T, ML, MF; // Nota do trabalho final, média das listas e média final

    printf ("Digite as notas das provas 1, 2 e 3, respectivamente: ");
    scanf ("%f %f %f", &P1, &P2, &P3);
    printf ("\nDigite a nota do trabalho final: ");
    scanf ("%f", &T);
    printf ("\nDigite as notas das listas 1, 2, 3, 4 e 5, respectivamente: ");
    scanf ("%f %f %f %f %f", &L1, &L2, &L3, &L4, &L5);

    if(P1 >= 0 && P2 >= 0 && P3 >= 0 && P1 <= 10 && P2 <= 10 && P3 <= 10 && T >= 0 && T <= 10)
    {
        if(L1 >= 0 && L2 >= 0 && L3 >= 0 && L4 >= 0 && L5 >= 0 && L1 <= 1 && L2 <= 1 && L3 <= 1 && L4 <= 1 && L5 <= 1)
        {
            ML = (L1 + L2 + L3 + L4 + L5) / 10;
            MF = ((P1 + 2*P2 + 3*P3 + 2*T) / 8) + ML;

            printf ("\nMédia Final de APC = %.2f\n", MF);
        }
    }

    else
    {
        printf("\nValor(es) digitado(s) inválido(s)!\n");
    }
    return 0;
}
