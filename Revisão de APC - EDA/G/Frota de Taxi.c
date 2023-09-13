#include <stdio.h>

int main()
{

    double a, g, ra, rg, ea, eg;

    scanf ("%lf %lf %lf %lf", &a, &g, &ra, &rg);

    ea = ra / a;
    eg = rg / g;

    if (ea > eg){
        printf ("A\n");
    }

    else {
        printf ("G\n");
    }

    return 0;
}
