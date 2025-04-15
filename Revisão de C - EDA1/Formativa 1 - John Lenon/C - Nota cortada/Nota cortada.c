#include <stdio.h>

int main ()
{

    int B, T;
    double A1, A2, Q1, Q2, T1, T2;

    scanf ("%d", &B);
    scanf ("%d", &T);

    if (B > T)
    {
        Q1 = 70 * T;
        T1 = (70 * (B - T)) / 2;
        A1 = Q1 + T1;

        Q2 = 70 * (160 - B);
        T2 = (70 * (160 - (160 - B) - T)) / 2;
        A2 = Q2 + T2;
    }

    else if (B < T)
    {
        Q1 = 70 * B;
        T1 = (70 * (T - B)) / 2;
        A1 = Q1 + T1;

        Q2 = 70 * (160 - T);
        T2 = (70 * (160 - (160 - T) - B)) / 2;
        A2 = Q2 + T2;
    }

    else
    {
        A1 = B * 70;
        A2 = (160 - B) * 70;
    }

    if (A1 > A2)
    {
        printf ("1\n");
    }

    else if (A1 < A2)
    {
        printf ("2\n");
    }

    else
    {
        printf ("0\n");
    }

    return 0;
}
