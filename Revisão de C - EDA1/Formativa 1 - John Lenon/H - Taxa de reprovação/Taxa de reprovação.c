#include <stdio.h>
#include <stdlib.h>

int compareInt(const void *a, const void *b)
{
    int int_a = *(const int *)a;
    int int_b = *(const int *)b;
    return int_a - int_b;
}

int main()
{
    int D;
    if (scanf("%d", &D) != 1) return 1;
    int ano, semestre, m;
    while (scanf("%d %d %d", &ano, &semestre, &m) == 3)
    {
        int *codigos = (int *)malloc(m * sizeof(int));
        int *reprovados = (int *)malloc(m * sizeof(int));
        if (codigos == NULL || reprovados == NULL) return 1;
        int max_reprovados = -1;
        for (int i = 0; i < m; i++)
        {
            int cod, matriculados, aprovados;
            scanf("%d %d %d", &cod, &matriculados, &aprovados);
            codigos[i] = cod;
            reprovados[i] = matriculados - aprovados;
            if (reprovados[i] > max_reprovados)
            {
                max_reprovados = reprovados[i];
            }
        }
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            if (reprovados[i] == max_reprovados) count++;
        }
        int *max_codigos = (int *)malloc(count * sizeof(int));
        if (max_codigos == NULL)
        {
            free(codigos);
            free(reprovados);
            return 1;
        }
        int j = 0;
        for (int i = 0; i < m; i++)
        {
            if (reprovados[i] == max_reprovados)
            {
                max_codigos[j++] = codigos[i];
            }
        }
        qsort(max_codigos, count, sizeof(int), compareInt);
        printf("%d/%d\n", ano, semestre);
        for (int i = 0; i < count; i++)
        {
            printf("%d ", max_codigos[i]);
        }
        printf("\n\n");
        free(codigos);
        free(reprovados);
        free(max_codigos);
    }
    return 0;
}
