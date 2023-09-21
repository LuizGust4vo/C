#include <stdio.h>

int main ()
{

    int tm;

    scanf ("%d", &tm);

    int m1[tm][tm], m2[tm][tm], m3[tm][tm];


    for (int l = 0; l < tm; l++)
    {
        for (int c = 0; c < tm; c++)
        {
            scanf ("%d", &m1[l][c]);
        }
    }

    for (int l = 0; l < tm; l++)
    {
        for (int c = 0; c < tm; c++)
        {
            scanf ("%d", &m2[l][c]);
        }
    }

    for (int l = 0; l < tm; l++)
    {
        for (int c = 0; c < tm; c++)
        {
            m3[l][c] = m1[l][c] + m2[l][c];
            printf ("%d ", m3[l][c]);
        }
        printf ("\n");
    }

    return 0;
}
