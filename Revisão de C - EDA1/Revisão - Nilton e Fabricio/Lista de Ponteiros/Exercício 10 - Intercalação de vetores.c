#include <stdio.h>
#define N 3

// PDF: Lista de Ponteiros. Exercício 10 — Intercalação de vetores.

void intercala (int *v1, int *v2, int *v3, int n)
{
    int *p1 = v1, *p2 = v2, *p3 = v3, cont = 0;

    for (int *p = v3; p < v3 + (2 * n); p++)
    {
        *p3 = *p1;
        p1++;
        p3++;

        *p3 = *p2;
        p2++;
        p3++;
    }
}

int main()
{
    int v1[N] = {1, 3, 5}, v2[N] = {2, 4, 6}, v3[2 * N] = {0};

    intercala (v1, v2, v3, N);

    for (int i = 0; i < (2 * N); i++)
    {
        printf ("%d ", v3[i]);
    }

    return 0;
}


// ---------- LINUS ----------
/*
#include <stdio.h>

void intercala(int *v1, int *v2, int *v3, int n){

    int *p, *v;
    v = v1;

    for(p = v3; p < v3 + (2*n); p+=2){
        *p = *v;
        v++;
    }

    v = v2;

    for(p = &v3[1]; p < v3 + (2*n); p+=2){
        *p = *v;
        v++;
    }
}

int main(){

    int v1[3] = {1, 3, 5};
    int v2[3] = {2, 4, 6};
    int v3[6] = {0};
    int tam = 3;

    for(int i = 0; i < 2*tam; i++){
        printf("%d ", v3[i]);
    }
    printf("\n\n");

    intercala(v1, v2, v3, tam);

    for(int i = 0; i < 2*tam; i++){
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}

n = 3
v1 = 1, 3, 5
v2 = 2, 4, 6
v3 = 1, 2, 3, 4, 5, 6 = v1[0], v2[0], v1[1], v2[1], v1[2], v2[2]
percorre o v3 preenchendo com v1 e v2
*/
// ---------- LINUS ----------
