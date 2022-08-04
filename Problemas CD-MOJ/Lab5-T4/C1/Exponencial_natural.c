#include <math.h>

int x = 3, y = 4;

int main ()
{
    double exp_natural (int x, int y);

    exp_natural (x, y);

    return 0;
}

double exp_natural (int x, int y)
{
    int fatorial = 0;
    double vd[y-1], soma = 0, euler, vx[y-1], vy[y-1];

    for (int cont1 = 0; cont1 < y - 1; cont1++)
    {
        vx[cont1] = pow(x, cont1 + 2);
    }

    for (int a = 2; a <= y; a++)
    {
        for (int cont3 = 1; cont3 <= (a - 1); cont3++)
        {
            if (fatorial == 0) fatorial = a;
            if (fatorial >= 1)
            {
                fatorial = fatorial * (a - cont3);
            }
        }
        vy[a-2] = fatorial;
        fatorial = 0;
    }

    for (int b = 0; b < y - 1; b++)
    {
        vd[b] = vx[b] / vy[b];
        soma = soma + vd[b];
    }

    euler = 1 + x + soma;

    printf ("%lf", euler);
}
