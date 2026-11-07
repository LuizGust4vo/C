#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void imprime (celula *le)
{
    // Cria um ponteiro temporário apontado para o primeiro elemento da lista
    celula *temp = le -> prox;

    // Loop para percorrer até o último elemento da lista
    while (temp != NULL)
    {
        // Imprime o dado do nó atual
        printf ("%d -> ", temp -> dado);

        // Move o ponteiro temporário para o próximo nó da lista
        temp = temp -> prox;
    }

    // Imprime NULL para indicar o final da lista
    printf ("NULL\n");

    return;
}

void imprime_rec (celula *le)
{
    // Cria um ponteiro temporário apontado para o primeiro elemento da lista
    celula *temp_r = le -> prox;

    // Se o ponteiro estiver apontado para NULL, ou seja, chegou no final:
    if (temp_r == NULL)
    {
        // Imprime o NULL ao final da lista
        printf ("NULL\n");

        return;
    }

    // Imprime o dado do nó tual
    printf ("%d -> ", temp_r -> dado);

    // Chama a função recursivamente, com o próximo elemento da lista
    imprime_rec (temp_r);
}
