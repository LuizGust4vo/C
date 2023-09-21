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

    if (price >= 0 && L >= 0 && I >= 0 && price <= pow(10, 9) && L <= 100 && I <= 100)
    {
        cost = (price / (100 + (L + I))) * 100;

        printf ("\nPreço de custo de fabricação = %lf\n", cost);
    }

    else
    {
        printf ("\nValor(es) digitado(s) inválido(s)!\n");
    }

    return 0;
}
