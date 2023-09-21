#include <stdio.h>

int main (){

int T;

    scanf ("%d", &T);
    int v1[T], soma = 0, ma, cont1 = 0;

    for (int cont = 0; cont < T; cont++)
    {
        scanf ("%d", &v1[cont]);
        soma = soma + v1[cont];
    }

    ma = soma / T;

    for (int cont = 0; cont < T; cont++)
    {
    if (v1[cont] > ma) printf ("%d ", v1[cont]);
    if (v1[cont] <= ma) cont1++;
    if (cont1 == T) printf ("0");
    }

return 0;
}
