# include <stdio.h>
# include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

// Função com os parâmetros
void divide_lista (celula *l, celula *l1, celula *l2)
{
    if ((l -> prox) == NULL) // Verifica se a lista está vazia ou se chegou no final
    {
        l2 -> prox = NULL; // Define o final da lista l2
        l1 -> prox = NULL; // Define o final da lista l1
        return;
    }

    // Verifica se o valor dado no prox nó é par
    if ((l -> prox -> dado) % 2 == 0)
    {
        // Se for par, o nó é adicionado à lista l2
        l2 -> prox = l -> prox;
        // Chama recursivamente a função com o prox nó de l e l2
        divide_lista (l -> prox, l1, l2 -> prox);
    }

    else
    {
        // Se for ímpar, o nó é adicionado à lista l1
        l1 -> prox = l -> prox;
        // Chama recursivamente a função com o prox nó de l e l1
        divide_lista (l -> prox, l1 -> prox, l2);
    }
}
