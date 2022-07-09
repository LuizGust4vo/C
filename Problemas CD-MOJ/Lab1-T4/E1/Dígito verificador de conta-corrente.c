#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int cc, dv, d1, d2, d3, d4, d5, d6;

    printf ("Informe o número da conta-corrente (6 dígitos): ");
    scanf("%d", &cc);

    if(cc>= 000001 && cc <= 999998)
    {

        d1 = cc / 100000;
        d2 = ((cc - (d1 * 100000)) / 10000);
        d3 = ((cc - (d1 * 100000 + d2 * 10000)) / 1000);
        d4 = ((cc - (d1 * 100000 + d2 * 10000 + d3 * 1000)) / 100);
        d5 = ((cc - (d1 * 100000 + d2 * 10000 + d3 * 1000 + d4 * 100)) / 10);
        d6 = (cc - (d1 * 100000 + d2 * 10000 + d3 * 1000 + d4 * 100 + d5 * 10));

        dv = 11 - (((d1 * 7) + (d2 * 6) + (d3 * 5) + (d4 * 4) + (d5 * 3) + (d6 * 2)) % 11);

        printf ("\nDigítos: %d...%d...%d...%d...%d...%d", d1, d2, d3, d4, d5, d6);
        printf ("\nDígito Verificador: %d", dv);
    }

    return 0;
}
