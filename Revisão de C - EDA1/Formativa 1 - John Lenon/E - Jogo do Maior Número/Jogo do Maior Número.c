#include <stdio.h>

int main ()
{

    long long int b, e, f;
    long long int l = 1, p = 1;

    scanf ("%lld %lld", &b, &e);
    scanf ("%lld", &f);

    for (int cont = 1; cont <= e; cont++)
    {
        l *= b;
    }

    for (int cont1 = f; cont1 > 1; cont1--)
    {
        p *= cont1;
    }

    if (l > p)
    {
        printf ("Lucas\n");
    }

    else if (p > l)
    {
        printf ("Pedro\n");
    }

    return 0;
}
