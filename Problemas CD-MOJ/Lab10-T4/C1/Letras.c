#include <stdio.h>

int conta_c (char str[], char c)
{
    int qtd_c = 0, i;
    for (i = 0; i < contaString(str); i++)
    {
        if (str[i] == c)
        {
            qtd_c++;
            break;
        }
    }
    return qtd_c;
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

int main (){

char caracter;
char texto[1000];
double pp;
int cont = 0;

scanf ("%c", &caracter);

while (scanf ("%s", texto) != EOF){
cont += conta_c (texto, caracter);
}

printf ("%d\n", cont);

return 0;
}
