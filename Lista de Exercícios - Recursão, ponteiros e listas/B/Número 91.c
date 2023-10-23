#include <stdio.h>

int f91(int N)
{
    if (N >= 101)
    {
        return N - 10;
    }
    else if (N > 0 && N <= 100)
    {
        return f91(f91(N + 11));
    }
}

int main ()
{

    int n[250000], cont = 0;

    do
    {
        scanf ("%d", &n[cont]);
        cont++;
    }
    while (n[cont - 1] != 0);

    for (int cont1 = 0; cont1 < cont - 1; cont1++)
    {
        printf ("f91(%d) = %d\n", n[cont1], f91(n[cont1]));
    }

    return 0;
}

