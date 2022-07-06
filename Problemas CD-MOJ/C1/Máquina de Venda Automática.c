#include <stdio.h>
#include <math.h>

int main ()
{

    int VP, Pago, Troco;
    int A, B, C, D, E, F;


    printf ("Valor do produto: ");
    scanf ("%d", &VP);
    printf ("Valor pago: ");
    scanf ("%d", &Pago);

    Troco = Pago - VP;
    A = Troco / 500;
    B = (Troco - A) / 100;
    C = (Troco - (B * 100)) / 50;
    D = (Troco - (B * 100) - (C * 50)) / 10;
    E = (Troco - (B * 100) - (C * 50) - (D * 10)) / 5;
    F = (Troco - (B * 100) - (C * 50) - (D * 10)) - (E * 5);

    if (VP <= Pago && VP >= 0 && Pago >= 0 && VP <= pow(10,6) && Pago <= pow(10, 6))
    {

        printf ("\n%d", Troco);
        printf ("\n%d", A);
        printf ("\n%d", B);
        printf ("\n%d", C);
        printf ("\n%d", D);
        printf ("\n%d", E);
        printf ("\n%d", F);
    }

    return 0;
}
