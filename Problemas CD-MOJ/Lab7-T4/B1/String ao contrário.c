#include <stdio.h>

int main ()
{

    char str[10000];
    int i = 0;

    scanf ("%s", str);

    do
    {
        i++;
    }
    while (str[i] != '\0');

    for(int cont = (i - 1); cont >= 0; cont--)
    {
        printf ("%c", str[cont]);
    }

    return 0;
}
