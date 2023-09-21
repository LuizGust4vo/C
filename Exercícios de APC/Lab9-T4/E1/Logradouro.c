#include <stdio.h>

struct tipoLogradouro
{
    char tipo[80];
    char nome[80];
    char complemento[80];
};

void criaLinhaCSV (struct tipoLogradouro info, char linha[240])
{
    int i1, i2, i3;
    int cont = 0;

    for (i1 = 0; info.tipo[i1] != '\0'; i1++)
    {
        linha[cont] = info.tipo[i1];
        cont++;
    }
    linha[cont] = ';';
    cont++;

    for (i2 = 0; info.nome[i2] != '\0'; i2++)
    {
        linha[cont] = info.nome[i2];
        cont++;
    }
    linha[cont] = ';';
    cont++;

    for (i3 = 0; info.complemento[i3] != '\0'; i3++)
    {
        linha[cont] = info.complemento[i3];
        cont++;
    }
    linha[cont] = '\0';
}
