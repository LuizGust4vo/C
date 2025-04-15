#include <stdio.h>

double calculaVelocidadeMedia (int tA, int tB, double distancia)
{
    double dts = tB - tA;
    double kmh = distancia / (dts / 3600);

    return kmh;
}

int levouMulta (int tA, int tB, double distancia, double velocidadeMaxima)
{
    if (calculaVelocidadeMedia (tA, tB, distancia) > velocidadeMaxima) return 1;
    if (calculaVelocidadeMedia (tA, tB, distancia) <= velocidadeMaxima) return 0;
}
