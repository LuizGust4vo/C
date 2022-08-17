#include <stdio.h>

int main ()
{

    char str1[1000];
    int i = 0, a = 0;

    while(scanf("%c", str1) != EOF)
    {

        do
        {
            i++;
        }
        while (str1[i] != '\0');

        for (int cont = 0; cont < i; cont++)
        {
            if (str1[cont] == 'o') a++;
        }
    }
    printf ("\n%d", a);

    return 0;
}
