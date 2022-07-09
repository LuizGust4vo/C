#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    double X1, x, x2;
    int p1, p2;

    printf("Digite o valor da média aritmética ponderada: ");
    scanf("%lf", &x);
    printf("Digite o valor do segundo elemento do conjunto: ");
    scanf("%lf", &x2);
    printf("Digite os valores dos pesos 1 e 2, respectivamente: ");
    scanf("%d %d", &p1, &p2);

    if(x >= 0 && x2 >= 0 && x <= pow(10, 9) && x2 <= pow(10, 9) && p1 > 0 && p2 > 0 && p1 <= 100 && p2 <= 100)
    {
        X1 = ((x*p1 + x*p2) - (x2*p2)) / p1;

        printf ("\nO valor do primeiro elemento do conjunto = %lf", X1);
    }

    else
    {
        printf("\nValor(es) digitado(s) inválido(s)!\n");

    }
    return 0;
}
