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
    int i1, i2, i3, cont = 0;

    for (i1 = 0; linha[i1] != ','; i1++)
    {
        filiacao.nome[i1] = linha[i1];
    }
    filiacao.nome[i1] = '\0';


    for (i2 = i1 + 1; linha[i2] != ','; i2++)
    {
        filiacao.nomeMae[cont] = linha[i2];
        cont++;
    }
    filiacao.nomeMae[cont] = '\0';

    cont = 0;

    for (i3 = i2 + 1; linha[i3] != '\0'; i3++)
    {
        filiacao.nomePai[cont] = linha[i3];
        cont++;
    }
    filiacao.nomePai[cont] = '\0';

    return filiacao;
}
