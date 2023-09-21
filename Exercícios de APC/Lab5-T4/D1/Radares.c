#include <stdio.h>

int main ()
{

    double calculaVelocidadeMedia (int tA, int tB, double distancia);
    int levouMulta (int tA, int tB, double distancia, double velocidadeMaxima);

    printf ("%lf", calculaVelocidadeMedia (61200, 63000, 60.0));
    printf ("\n%d", levouMulta (61200, 63000, 60.0, 120.0));

    return 0;
}

double calculaVelocidadeMedia (int tA, int tB, double distancia)
{

    double dts = tB - tA;
    double kmh = distancia / (dts / 3600);

    return kmh;
}

int levouMulta (int tA, int tB, double distancia, double velocidadeMaxima)
{

    if (calculaVelocidadeMedia (61200, 63000, 60.0) > velocidadeMaxima) return 1;
    if (calculaVelocidadeMedia (61200, 63000, 60.0) <= velocidadeMaxima) return 0;
}
