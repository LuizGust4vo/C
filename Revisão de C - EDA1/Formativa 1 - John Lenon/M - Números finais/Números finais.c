#include <stdio.h>

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
