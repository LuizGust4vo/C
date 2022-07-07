#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{

    setlocale (LC_ALL, "");

    double cost, price;
    int L, I;

    printf ("Digite o valor que o consumidor irá pagar pelo carro (R$): ");
    scanf ("%lf", &price);
    printf ("Porcentagem de lucro para a distribuidora: ");
    scanf ("%d", &L);
    printf ("Porcentagem de impostos a serem pagos: ");
    scanf ("%d", &I);

    cost = (price / (100 + (L + I))) * 100;

    printf ("\nPreço de custo de fabricação = %lf", cost);

    return 0;
}
