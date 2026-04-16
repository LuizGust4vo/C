#include <stdio.h>
#include <string.h>

long long int soma(const char *num)
{
    if (strlen(num) == 0)
    {
        return 0;
    }
    else
    {
        int ultimoDigito = num[strlen(num) - 1] - '0';
        char resto[strlen(num)];
        strncpy(resto, num, strlen(num) - 1);
        resto[strlen(num) - 1] = '\0';

        return ultimoDigito + soma(resto);
    }
}

int main()
{
    char num[10^12];
    scanf("%s", num);

    long long int resultado = soma(num);

    printf("%lld\n", resultado);

    return 0;
}
