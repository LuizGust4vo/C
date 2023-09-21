#include <stdio.h>

int main ()
{

    int l, c;
    int a = 0, b = 0, sl[100000], sc[100000];

    scanf ("%d %d", &l, &c);

    int m[l][c];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf ("%d", &m[i][j]);
            sc[i] = sc[i] + m[i][j];

            if (i == 0)
            {
                b = sc[i];
            }

            else if (sc[i] > b)
            {
                b = sc[i];
            }
        }
    }

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < l; i++)
        {
            sl[j] = sl[j] + m[i][j];
            if (j == 0)
            {
                a = sl[j];
            }

            else if (sl[j] > a)
            {
                a = sl[j];
            }
        }
    }

    if (a >= b) printf ("%d\n", a);

    else if (b > a) printf ("%d\n", b);

    return 0;
}
