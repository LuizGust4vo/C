#include <stdio.h>

int main ()
{

    int tamanho, l1, c1, l2, c2;
    char position;

    scanf ("%d", &tamanho);
    char str1[tamanho][10000];

    for (int l = -1; l < tamanho; l++)
    {
        fgets (str1[l], 1000, stdin);
    }
    scanf ("%d %d", &l1, &c1);
    l2 = l1;

    while (scanf (" %c", &position) != EOF)
    {
        if (position == 'j')
        {
            l2 = l2 + 1;
            if (l2 > tamanho) l2 = l2 - 1;
        }
        if (position == 'k')
        {
            l2 = l2 - 1;
            if (l2 < 1) l2 = l2 + 1;
        }

        if (str1[l2 - 1][c1 - 1] == '\0' || str1[l2 - 1][c1 - 1] == '\n')
        {
            c2 = c1;
            do
            {
                c1 = c1 - 1;
            }
            while (str1[l2 - 1][c1 - 1] == '\0' || str1[l2 - 1][c1 - 1] == '\n');
            printf ("%d %d %c\n", l2, c1, str1[l2 - 1][c1 - 1]);
            c1 = c2;
        }
        else
        {
            printf ("%d %d %c\n", l2, c1, str1[l2 - 1][c1 - 1]);
        }
    }

    return 0;
}
