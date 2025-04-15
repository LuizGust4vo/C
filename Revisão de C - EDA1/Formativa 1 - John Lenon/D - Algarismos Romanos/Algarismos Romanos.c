#include <stdio.h>
#include <string.h>

void R(int n, char *r)
{

    int v[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *rom[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    r[0] = '\0';

    for (int i = 0; i < 13; i++)
    {
        while (n >= v[i])
        {
            strcat (r, rom[i]);
            n -= v[i];
        }
    }
}

int main()
{
    int n;

    scanf ("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int v;

        scanf ("%d", &v);

        char r[20];

        R (v, r);
        printf ("%s\n", r);
    }

    return 0;
}
