#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{

    setlocale(LC_ALL, "");

    int hora, min, seg;

    printf ("Digite as horas: ");
    scanf ("%d", &hora);

    if (hora >= 0 && hora <= pow(2, 32))
    {

        min = hora * 60;
        seg = hora * 3600;

        printf ("Horas = %d", hora);
        printf ("\nHoras em minutos = %d", min);
        printf ("\nHoras em segundos = %d", seg);

    }

    return 0;
}
