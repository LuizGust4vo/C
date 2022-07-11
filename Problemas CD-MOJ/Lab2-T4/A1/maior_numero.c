#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int N1, N2, N3, N4;

    printf ("Digite 4 números: ");
    scanf("%d%d%d%d", &N1, &N2, &N3, &N4);

    if (N1 >= N2 && N1 >= N3 && N1 >= N4)
    {
        printf ("\nMaior número = %d", N1);
    }
    else if (N2 >= N1 && N2 >= N3 && N2 >= N4)
    {
        printf ("\nMaior número = %d", N2);
    }
    else if (N3 >= N1 && N3 >= N2 && N3 >= N4)
    {
        printf ("\nMaior número = %d", N3);
    }
    else if (N4 >= N1 && N4 >= N2 && N4 >= N3)
    {
        printf ("\nMaior número = %d", N4);
    }

    return 0;
}
