#include <stdio.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void mescla_listas (celula *l1, celula *l2, celula *l3)
{
    celula *fim = l3;

    l1 = l1 -> prox;
    l2 = l2 -> prox;

    // Percorre as listas l1 e l2 enquanto houver elementos em ambas
    while (l1 && l2)
    {
        if ((l1 -> dado) < (l2 -> dado))
        {
            // Se o elemento de l1 é menor que o elemento de l2, adiciona o elemento de l1 a l3
            fim -> prox = l1;
            fim = fim -> prox;
            l1 = l1 -> prox;
            fim -> prox = NULL;
        }

        else
        {
            // Se o elemento de l2 é menor ou igual ao elemento de l1, adiciona o elemento de l2 a l3
            fim -> prox = l2;
            fim = fim -> prox;
            l2 = l2 -> prox;
            fim -> prox = NULL;

        }
    }

    // Verifica se ainda há elementos não processados em l1 e, se houver, adiciona-os a l3
    if (l1)
    {
        fim -> prox = l1;
    }

    // Se não, adiciona os elementos não processados em l2 a l3
    else
    {
        fim -> prox = l2;
    }
}
