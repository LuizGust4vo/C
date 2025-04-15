#include <stdio.h>
#include <string.h>

int encaixa (int a, int b)
{
    if (b > a)
    {
        return 0;
    }

    while (b > 0)
    {
        if (a % 10 != b % 10)
        {
            return 0;
        }

        a /= 10;
        b /= 10;
    }

    return 1;
}

int segmento (int a, int b)
{
    if (encaixa (a, b) == 1)
    {
        return 1;
    }

    char str1[9999], str2[9999];

    if (encaixa (a, b) == 0)
    {
        sprintf (str1, "%d", a);
        sprintf (str2, "%d", b);

        if (strstr (str2, str1) != NULL || strstr (str1, str2) != NULL)
        {
            return 1;
        }

        else return 0;
    }
}
