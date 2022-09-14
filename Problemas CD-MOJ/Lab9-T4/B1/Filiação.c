#include <stdio.h>

struct tipoFiliacao
{
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV (char linha[240])
{
    struct tipoFiliacao filiacao;
    int i1 = 0, i2, i3;
    int cont1, cont2, cont3 = 0;

    do
    {
        if (linha[i1] == ',')
        {
            for (cont1 = 0; cont1 < i1; cont1++)
            {
                filiacao.nome[cont1] = linha[cont1];
            }
            filiacao.nome[cont1] = '\0';
            break;
        }
        i1++;

    }
    while (linha[i1] != '\0');


    i2 = i1 + 1;
    do
    {
        if (linha[i2] == ',')
        {
            for (cont2 = i1; cont2 < i2; cont2++)
            {
                filiacao.nomeMae[cont2-i1-1] = linha[cont2];
            }
            filiacao.nomeMae[cont2-i1-1] = '\0';
            break;
        }
        i2++;
    }
    while (linha[i2] != '\0');


    i3 = i2 + 1;
    do
    {
        filiacao.nomePai[cont3] = linha[i3];
        cont3++;
        i3++;
    }
    while (linha[i3] != '\0');
    filiacao.nomePai[cont3] = '\0';

    printf ("%s %s %s\n", filiacao.nome, filiacao.nomeMae, filiacao.nomePai);
}

