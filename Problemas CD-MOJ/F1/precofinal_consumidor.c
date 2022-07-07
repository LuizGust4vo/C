#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    double cost, price;
    int L, I;

    printf ("Digite o custo de fabricação do veículo: ");
    scanf ("%lf", &cost);
    printf ("Digite a porcentagem de lucro para a distribuidora: ");
    scanf ("%d", &L);
    printf ("Digite a porcentagem de impostos a serem pagos: ");
    scanf ("%d", &I);

    price = cost + (cost / 100 * L) + (cost / 100 *I);

    printf ("\ncost = %lf", cost);
    printf ("\nL = %d", L);
    printf ("\nI = %d", I);
    printf ("\nPreço final a ser pago pelo consumidor: %.2lf", price);


    return 0;
}
