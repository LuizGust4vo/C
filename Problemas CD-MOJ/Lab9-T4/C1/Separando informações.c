#include <stdio.h>

struct tipoData
{
    int dia;
    int mes;
    int ano;
};
struct tipoPessoa
{
    char nome[80];
    struct tipoData dtNascimento;
};

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento)
{
    struct tipoPessoa x;
    int i;

    for(i = 0; nome[i] != '\0'; i++)
    {
        x.nome[i] = nome[i];
    }
    x.nome[i] = '\0';
    x.dtNascimento.ano = dt_nascimento/10000;
    x.dtNascimento.mes = (dt_nascimento/100)%100;
    x.dtNascimento.dia = dt_nascimento%100;

    return x;
}
