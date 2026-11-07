#include <stdio.h>

int main()
{
    int v[100], vsomados[100], tam = 0, soma, somaAcumulada = 0, cont = 0;

    // Lê números inteiros da entrada até que seja inserido um zero
    while (scanf ("%d", &v[tam]) && v[tam] != 0)
    {
        tam++;
    }

    // Lê o valor da soma
    scanf ("%d", &soma);

    for (int i = 0; i < tam; i++)
    {
        somaAcumulada += v[i];

        // Quando a soma acumulada em se torna maior que soma
        if (somaAcumulada > soma)
        {
            // Adiciona o número a vsomados
            vsomados[cont] = v[i];
            cont++;

            // Reinicia a soma acumulada
            somaAcumulada = 0;
        }
    }

    // Imprime os números em vsomados na ordem inversa
    for (int i = cont - 1; i >= 0; i--)
    {
        printf("%d\n", vsomados[i]);
    }

    return 0;
}
