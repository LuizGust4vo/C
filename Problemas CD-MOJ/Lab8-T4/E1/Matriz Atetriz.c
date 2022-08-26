#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    int matriz[T][T];

    for(int i = 0; i < T; i++)
    {
        for(int j = 0; j < T; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    int cont = 0, a = 0;

    while(a == 0)
    {
        for(int i = 0; i < T; i++)
        {
            cont = 0;
            for(int j = 0; j < T; j++)
            {
                if(matriz[i][j] == 1)
                {
                    cont++;
                }
            }
            if(cont == T)
            {
                for(int j = 0; j < T; j++)
                {
                    matriz[i][j] = 0;
                }
            }
            for(int j = 0; j < T; j++)
            {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

        printf("\n");

        for(int j = 0; j < T; j++)
        {
            for(int a = 0; a < (T - 1); a++)
            {
                if(matriz[a][j] == 1 && matriz[a + 1][j] == 0)
                {
                    matriz[a][j] = 0;
                    matriz[a + 1][j] = 1;
                    a =- 1;
                }
            }
        }

        for(int i = 0; i < T; i++)
        {
            for(int j = 0; j < T; j++)
            {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        for(int i = 0; i < T; i++)
        {
            cont = 0;
            for(int j = 0; j < T; j++)
            {
                if(matriz[i][j] == 1)
                {
                    cont++;
                }
            }
            if(cont == T)
            {
                a--;
                printf("\n");
                break;
            }
        }
        a++;
    }

    return 0;
}
