#include <stdio.h>

int main ()
{

    char str[10000];
    int cont = 0, i = 0;

    scanf ("%s", str);

    do
    {
        i++;
    }
    while (str[i] != '\0');

    printf ("%d", i);

    return 0;
}
