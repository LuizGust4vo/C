#include <stdio.h>

int cont = 0;

char trocaXY (char str[])
{
    if (str[cont] == '\0')
    {
        return;
    }

    if (str[cont] == 'x')
    {
    str[cont] = 'y';
    return trocaXY (str);
    }

    else
    {
    cont++;
    return trocaXY (str);
    }

}

int main ()
{

    char s[100];

    scanf ("%s", &s);

    trocaXY (s);

    printf ("%s\n", s);

}
