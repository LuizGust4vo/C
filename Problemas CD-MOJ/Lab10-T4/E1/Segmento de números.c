#include <stdio.h>
#include <math.h>

int tamanho (int x)
{
    int tx = 0;

    do
    {
        x = x / 10;
        tx++;
    }
    while (x > 0);

    return tx;
}

int encaixa (int a, int b)
{
    int end, fator = pow (10, tamanho (b));

    end = a - (a / fator * fator);

    if (end == b) return 1;

    else return 0;
}

int segmento (int a, int b)
{
    int aux;
    if (tamanho(a) < tamanho(b))
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (encaixa(a, b) == 1) return 1;

    else return 0;
}

int main ()
{
    printf ("%d\n", encaixa (567890, 678));
    printf ("%d", segmento (567890, 678));

    return 0;
}
