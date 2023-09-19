#include <stdio.h>

int main()
{
    int A, V, X, Y;

    int teste = 1;

    while (1)
    {
        scanf("%d %d", &A, &V);

        if (A == 0 && V == 0)
        {
            break;
        }

        int aeroportos[A + 1];

        for (int i = 1; i <= A; i++)
        {
            aeroportos[i] = 0;
        }

        for (int i = 0; i < V; i++)
        {
            scanf("%d %d", &X, &Y);
            aeroportos[X]++;
            aeroportos[Y]++;
        }

        int max_trafego = 0;

        for (int i = 1; i <= A; i++)
        {
            if (aeroportos[i] > max_trafego)
            {
                max_trafego = aeroportos[i];
            }
        }

        printf("Teste %d\n", teste);

        int first = 1;

        for (int i = 1; i <= A; i++)
        {
            if (aeroportos[i] == max_trafego)
            {
                if (first)
                {
                    printf("%d", i);
                    first = 0;
                }
                else
                {
                    printf(" %d", i);
                }
            }
        }

        printf("\n\n");
        teste++;
    }

    return 0;
}
