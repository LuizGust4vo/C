#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int contarEstrelas (int qtd, int abertura);

    int qtd, abertura;

    printf ("%d", contarEstrelas (qtd, abertura));

    return 0;
}

int contarEstrelas (int qtd, int abertura)
{
    int ff, cont1 = 0, capacidade;

    printf ("Digite a quantidade de estrelas a serem estudadas: ");
    scanf ("%d", &qtd);
    printf ("Digite a abertura do telescópio: ");
    scanf ("%d", &abertura);

    for (int cont2 = 1; cont2 <= qtd; cont2++)
    {
        printf ("Digite o fluxo de fótons: ");
        scanf ("%d", &ff);
        capacidade = ff * abertura;
        if (capacidade >= 40000000) cont1++;
    }
    return cont1;
}
