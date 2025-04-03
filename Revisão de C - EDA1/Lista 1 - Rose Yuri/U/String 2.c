#include <stdio.h>

int main ()
{

    char s[10000];
    int cont = 0;

    scanf ("%s", s);

    do
    {
        cont++;
    }
    while (s[cont] != '\0');

    for (int cont1 = cont - 1; cont1 >= 0; cont1--)
    {
        printf ("%c", s[cont1]);
    }

    printf ("\n");

    return 0;
}
