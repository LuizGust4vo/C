#include <stdio.h>

int main ()
{

    int n, i = 1;

    scanf ("%d", &n);

    printf ("\n");
    for (int cont = 0; cont < n; cont++)
    {
        for (int a = n - cont; a > 1; a--)
        {
            printf (" ");
        }
        for (int cont1 = 0; cont1 < i; cont1++)
        {
            printf ("*");
        }
        i = i + 2;
        printf ("\n");
    }

    return 0;
}
