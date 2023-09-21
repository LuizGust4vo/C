double potencia (int potencia, int n)
{
    double resultado = 1;

    for (int i = 0; i < n; i++)
    {
        resultado *= potencia;
    }
    return resultado;
}

long int fatorial (int n)
{
    double resultado = 1;

    while (n > 0)
    {
        resultado *= n;
        n--;
    }

    return resultado;
}

double exp_natural (int x, int n)
{
    double resultado = 1;
    for (int i = 1; i <= n; i++)
    {
        resultado = resultado + potencia (x, i) / fatorial (i);
    }
    return resultado ;
}
