#include <stdio.h>
#include <locale.h>

double pesoT, pesoG;
int main ()
{
    setlocale (LC_ALL, "");

    int validaPeso (double pesoKg);
    void fazTonelada (double pesoKg);
    void fazGrama (double pesoKg);

    double pesoKg;

    printf ("\n%d\n", validaPeso (pesoKg));
    fazTonelada (pesoKg);
    fazGrama (pesoKg);
}

int validaPeso (double pesoKg)
{
    printf ("Digite o peso: ");
    scanf ("%lf", &pesoKg);
    pesoT = pesoKg / 1000;
    pesoG = pesoKg * 1000;

    if (pesoKg < 0)
    {
        printf ("Inválido!");
        return 0;
    }
    if (pesoKg >= 0)
    {
        printf ("Válido!");
        return 1;
    }
}

void fazTonelada (double pesoKg)
{
    printf ("\nPeso em toneladas = %.4lf", pesoT);
}

void fazGrama (double pesoKg)
{
    printf ("\nPeso em gramas = %.4lf\n", pesoG);
}
