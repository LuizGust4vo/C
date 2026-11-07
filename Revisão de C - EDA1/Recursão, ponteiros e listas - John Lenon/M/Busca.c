#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *busca (celula *le, int x)
{
    celula *atual = le -> prox; // Começamos do primeiro elemento após o nó cabeça

    while (atual != NULL)
    {
        if (atual -> dado == x)
        {
            return atual; // Encontramos o elemento, retornamos o ponteiro
        }
        atual = atual -> prox; // Próximo elemento da lista
    }
    return NULL; // Elemento não encontrado, retornamos o ponteiro
}

celula *busca_rec (celula *le, int x)
{
    if (le == NULL)
    {
        return NULL; // A lista está vazia
    }

    if (le -> dado == x)
    {
        return le; // Encontramos o elemento, retornamos o ponteiro
    }

    return busca_rec (le -> prox, x); // Chamada recursiva na próxima célula
}
