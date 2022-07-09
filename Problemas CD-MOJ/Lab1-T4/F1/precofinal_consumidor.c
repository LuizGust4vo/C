#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "");
    double cost, price;
    int L, I;

    printf ("Digite o custo de fabricação do veículo (R$): ");
    scanf ("%lf", &cost);
    printf ("Digite a porcentagem de lucro para a distribuidora: ");
    scanf ("%d", &L);
    printf ("Digite a porcentagem de impostos a serem pagos: ");
    scanf ("%d", &I);

    if (cost >= 0 && L >= 0 && I >= 0 && cost <= pow(10, 9) && L <= 100 & I <= 100)
    {
        price = cost + (cost / 100 * L) + (cost / 100 *I);

        printf ("\nPreço final a ser pago pelo consumidor = R$ %.2lf\n", price);
    }

    else
    {
        printf ("\nValor(es) informado(s) inválido(s)!\n");
    }

    return 0;
}
