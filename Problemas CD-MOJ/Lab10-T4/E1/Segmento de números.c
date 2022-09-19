#include <stdio.h>
#include <string.h>

int encaixa(int a, int b)
{
    char vetA[10] = {};
    int vetAI[10] = {};
    char vetB[10] = {};
    int vetBI[10] = {};
    vetA[0] = (a % 10) + '0';
    vetB[0] = (b % 10) + '0';
    int a1 = a / 10;
    int b1 = b / 10;
    int tamA = 1;
    int tamB = 1;
    char *p;

    for(int i = 1; i < 9; i++)
    {
        if(a1 % 10 != 0)
        {
            vetA[i] = (a1 % 10) + '0';
            a1 = a1 / 10;
        }
        else
        {
            break;
        }
    }

    for(int i = 1; i < 10; i++)
    {
        if(b1 % 10 != 0)
        {
            vetB[i] = (b1 % 10) + '0';
            b1 = b1 / 10;
        }
        else
        {
            break;
        }
    }

    p = strstr(vetA, vetB);

    if(p)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int segmento(int a, int b)
{
    int resp;
    if(a > b)
    {
        resp = encaixa(a, b);
    }
    else
    {
        resp = encaixa(b, a);
    }

    return resp;
}
