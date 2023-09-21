#include <stdio.h>

int main (){

int T;

    scanf ("%d", &T);
    int v1[T], v2[T], vsoma[T];

    for (int cont = 0; cont < T; cont++)
    {
        scanf ("%d", &v1[cont]);
    }

    for (int cont = 0; cont < T; cont++)
    {
        scanf ("%d", &v2[cont]);
    }

    for (int cont = 0; cont < T; cont++)
    {
    vsoma[cont] = v1[cont] + v2[cont];
    printf ("%d ", vsoma[cont]);
    }


return 0;
}
