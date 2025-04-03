#include <stdio.h>

int main ()
{

    int tamanho, v[10000], menor,  menorI;

    scanf ("%d", &tamanho);

    for (int cont = 0; cont < tamanho; cont++)
    {
        scanf ("%d", &v[cont]);

        if (cont == 0)
        {
            menor = v[cont];
            menorI = cont;
        }

        if (v[cont] < menor)
        {
            menor = v[cont];
            menorI = cont;
        }
    }

    printf ("%d\n", menorI);

    return 0;
}
