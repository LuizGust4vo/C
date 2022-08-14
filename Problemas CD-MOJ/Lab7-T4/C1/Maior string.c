#include <stdio.h>

int main ()
{

    char str[10000];
    int T, M, i;

    scanf ("%d", &T);

    for (int cont = 0; cont < T; cont++)
    {
        i = 0;

        scanf ("%s", &str);

        do
        {
            i++;
        }
        while (str[i] != '\0');

        if (cont == 0) M = i;
        if (i > M) M = i;
    }

    printf ("%d", M);

    return 0;
}
