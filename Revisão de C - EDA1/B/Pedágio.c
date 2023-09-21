#include <stdio.h>

int main ()
{

    int comprimento, distancia;
    int custokm, pedagio;
    int total;

    scanf ("%d %d", &comprimento, &distancia);
    scanf ("%d %d", &custokm, &pedagio);

    total = (pedagio * (comprimento / distancia)) + (custokm * comprimento);

    printf ("%d\n", total);

    return 0;
}
