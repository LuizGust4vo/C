#include <stdio.h>

int main()
{
    long long int N;

    scanf("%lld", &N);

    long long int v1[N], soma = 0, media;

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &v1[i]);
        soma += v1[i];
    }

    media = soma / N;

    int encontrou = 0;
    for (int i = 0; i < N; i++)
    {
        if (v1[i] > media)
        {
            if (encontrou)
            {
                printf(" ");
            }
            printf("%lld", v1[i]);
            encontrou = 1;
        }
    }

    if (!encontrou)
    {
        printf("0");
    }

    printf("\n");
    return 0;
}
