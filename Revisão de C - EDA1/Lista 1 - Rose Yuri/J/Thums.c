#include <stdio.h>

int main ()
{

    int N;

    scanf ("%d", &N);

    for (int cont = 1; cont <= N; cont++){
    if (cont % 2 != 0) printf ("THUMS THUMS THUMS\n");
    if (cont % 2 == 0) printf ("THUMS THUMS THUMS THUMS THUMS THUMS\n");
    }

    return 0;
}
