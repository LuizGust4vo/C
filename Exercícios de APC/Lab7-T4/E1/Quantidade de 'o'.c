#include <stdio.h>

int conta_0 (char str[]);
int contaString (char str[]);
int main ()
{
    char palavra[100];
    int n = 0;
    while (scanf ("%s", palavra) != EOF)
    {
        n += conta_o (palavra);
    }
    printf ("%d\n", n);
    return 0;
}

int conta_o (char str[])
{
    int qtd_o = 0, i;
    for (i = 0; i < contaString(str); i++)
    {
        if (str[i] == 'o')
        {
            qtd_o++;
        }
    }
    return qtd_o;
}

int contaString (char str[])
{
    int tamanho = 0;
    while (str[tamanho] != '\0')
    {
        tamanho++;
    }
    return tamanho;
}
