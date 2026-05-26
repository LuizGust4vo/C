#include <stdio.h>
#include <string.h>

int separa(char v[], int p, int r, long int *qtd) {
    int c = v[r]; // pivô
    int t, j = p;

    for (int k = p; k < r; ++k) {
        if (v[k] <= c) {
            t = v[j];
            v[j] = v[k];
            v[k] = t;
            ++j;
            (*qtd)++;
        }
    }

    t = v[j];
    v[j] = v[r];
    v[r] = t;
    (*qtd)++;

    return j;
}

void quicksort(char v[], int p, int r, long int *qtd) {
    if (p < r) {
        int j = separa(v, p, r, qtd);
        quicksort(v, p, j - 1, qtd);
        quicksort(v, j + 1, r, qtd);
    }
}

int main() {
    char v[1024];
    long int qt_trocas = 0;
    int n;

    if (fgets(v, sizeof(v), stdin) != NULL) {
        v[strcspn(v, "\n")] = '\0'; // Remove a nova linha, se existir
    }

    n = strlen(v); // Obtém o tamanho do vetor de caracteres

    printf("Antes : %s\n", v);
    quicksort(v, 0, n - 1, &qt_trocas);
    printf("Depois: %s\n", v);
    printf("Trocas: %ld\n", qt_trocas);

    return 0;
}
