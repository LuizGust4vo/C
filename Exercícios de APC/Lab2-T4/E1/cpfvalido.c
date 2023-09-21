#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    unsigned long long int cpfdv, cpf;
    int soma1, soma2, resto1, resto2, dv1, dv2;

    printf ("Digite o CPF: ");
    scanf ("%llu", &cpfdv);
    cpf = cpfdv / 100;

    soma1 = 2 * (cpf % 10);
    cpf /= 10;

    soma1 += 3 * (cpf % 10);
    cpf /= 10;

    soma1 += 4 * (cpf % 10);
    cpf /= 10;

    soma1 += 5 * (cpf % 10);
    cpf /= 10;

    soma1 += 6 * (cpf % 10);
    cpf /= 10;

    soma1 += 7 * (cpf % 10);
    cpf /= 10;

    soma1 += 8 * (cpf % 10);
    cpf /= 10;

    soma1 += 9 * (cpf % 10);
    cpf /= 10;

    soma1 += 10 * (cpf % 10);
    cpf = cpfdv / 10;

    // printf ("Soma = %d", soma1);

    resto1 = (soma1 * 10) % 11;
    if (resto1 == 10)
    {
        resto1 = 0;
    }
    // printf ("\nResto 1 = %d", resto1);
    dv1 = (cpfdv / 10) % 1000 % 100 % 10;
    // printf ("\n%d", dv1);

    soma2 = 2 * (cpf % 10);
    cpf /= 10;

    soma2 += 3 * (cpf % 10);
    cpf /= 10;

    soma2 += 4 * (cpf % 10);
    cpf /= 10;

    soma2 += 5 * (cpf % 10);
    cpf /= 10;

    soma2 += 6 * (cpf % 10);
    cpf /= 10;

    soma2 += 7 * (cpf % 10);
    cpf /= 10;

    soma2 += 8 * (cpf % 10);
    cpf /= 10;

    soma2 += 9 * (cpf % 10);
    cpf /= 10;

    soma2 += 10 * (cpf % 10);
    cpf /= 10;

    soma2 += 11 * (cpf % 10);
    cpf /= 10;

    // printf ("\nSoma = %d", soma2);
    resto2 = (soma2 * 10) % 11;
    // printf ("\nResto 2 = %d", resto2);
    dv2 = cpfdv % 10;
    // printf ("\n%d", dv2);

    if (resto1 == dv1 && resto2 == dv2)
    {
        printf ("\nVálido!");
    }

    else
    {
        printf ("\nInválido!");
    }

    return 0;
}
