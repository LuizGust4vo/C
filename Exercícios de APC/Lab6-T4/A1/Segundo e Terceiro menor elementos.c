#include <stdio.h>

int main ()
{
    int T, m, sm, tm;

    scanf ("%d", &T);
    int v1[T];

    for (int cont = 0; cont < T; cont++)
    {
        scanf ("%d", &v1[cont]);

        if (cont == 0) m = v1[cont];
        if (v1[cont] < m){
        tm = sm;
        sm = m;
        m = v1[cont];
        }

    if (v1[cont] > m && v1[cont] < sm){
    tm = sm;
    sm = v1[cont];
    }
    if (v1[cont] > sm && v1[cont] < tm) tm = v1[cont];
    }

    printf ("%d\n%d", sm, tm);

    return 0;
}
