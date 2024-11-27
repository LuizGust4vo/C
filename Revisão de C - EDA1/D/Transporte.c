#include <stdio.h>

int main ()
{

    int A, B, C;
    int X, Y, Z;
    int capacidade = 0;

    scanf ("%d %d %d", &A, &B, &C);
    scanf ("%d %d %d", &X, &Y, &Z);


    if (A > X || B > Y || C > Z)
    {
        printf ("%d\n", capacidade);
    }

    else
    {
        capacidade = (X / A) * (Y / B) * (Z / C);
        printf ("%d\n", capacidade);
    }

    return 0;
}
