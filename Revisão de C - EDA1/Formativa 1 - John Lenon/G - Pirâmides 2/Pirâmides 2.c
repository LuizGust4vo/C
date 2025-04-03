#include <stdio.h>

int main()
{

    int n, i = 1;

    scanf ("%d", &n);

    printf ("\n");

    for (int cont = 1; cont <= n; cont++)
    {
        for (int cont1 = n - cont; cont1 > 0; cont1--)
        {
            printf (" ");
        }

        for (int a = 1; a <= i; a++)
        {
            printf ("*");
        }
        i = i + 2;
        printf ("\n");
    }

    return 0;
}
