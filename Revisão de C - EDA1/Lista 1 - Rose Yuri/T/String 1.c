#include <stdio.h>
#include <string.h>

int main ()
{

    char s[1000];
    int cont = 0;

    scanf ("%s", &s);

    do
    {
        cont++;
    }
    while (s[cont] != '\0');

    printf ("%d\n", cont);

    return 0;
}
