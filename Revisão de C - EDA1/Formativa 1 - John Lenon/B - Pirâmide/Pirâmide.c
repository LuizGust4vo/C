#include <stdio.h>

int main(){

    int N;

    scanf ("%d", &N);

    int matriz[N][N];

    for (int l = 0; l < N; l++){
        for (int c = 0; c < N; c++){

            int valor = (l < c) ? l + 1: c + 1;
            valor = (valor < N - l) ? valor : N - l;
            valor = (valor < N - c) ? valor : N - c;
            matriz[l][c] = valor;
        }
    }

    for (int l = 0; l < N; l++){
        for (int c = 0; c < N; c++){
            printf ("%d ", matriz[l][c]);
        }
        printf ("\n");
    }

    return 0;
}
