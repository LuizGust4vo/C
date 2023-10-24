#include <stdio.h>

char *strFinal = NULL;
int contV = 0;
int contX = 0;

int ajustaVetor (char str[], int contV, int contX)
{

    if(contX == 0)
    {
        strFinal = str;
        str[contV] = '\0';
        return 0;
    }

    else
    {
        str[contV] = 'x';
        contV++;
        contX--;
        return ajustaVetor (str, contV, contX);
    }
}

int ajustaString (char str[], int cont)
{
    static char sX[1001];

    if (str[cont] == 'x')
    {
        contX++;
    }

    else
    {
        if (str[cont] == '\0')
        {
            return ajustaVetor (sX, contV, contX);
        }

        else
        {
            sX[contV] = str[cont];
            contV++;
        }
    }

    cont++;
    return ajustaString(str, cont);
}

int main ()
{
    char frase[1001];
    int cont = 0;

    scanf ("%[^\n]", frase);

    ajustaString (frase, cont);

    printf ("%s\n", *&strFinal);

    return 0;
}
