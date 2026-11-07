#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void insere_inicio (celula *le, int x)
{
    // Alocação de memória para o novo valor x
    celula *novo_inicio = malloc (sizeof (celula));

    // Loop para garantir que a alocação de memória seja bem-sucedida
    if (novo_inicio == NULL)
    {
        return;
    }

    novo_inicio -> prox = le -> prox; // Define novo_inicio como novo início da lista
    novo_inicio -> dado = x; // Recebe o valor de x
    le -> prox = novo_inicio; // le é ajustado para apontar o novo início da lista
}

void insere_antes (celula *le, int x, int y)
{
    // Alocação de memória para o novo valor x
    celula *novo_x = malloc (sizeof (celula));

    // Inicia o ponteiro a para apontar o primeiro nó da lista
    celula *a = le -> prox;

    if (novo_x == NULL)
    {
        return;
    }

    // Loop para procurar o nó com o valor de y
    while (a)
    {
        // Se encontrar um nó com o valor de y:
        if (a -> dado == y)
        {
            novo_x -> prox = a -> prox; // Aponta o nó seguinte de a
            novo_x -> dado = a -> dado; // Recebe o valor de y

            a -> prox = novo_x; // Aponta o novo_x
            a -> dado = x; // Recebe o valor de x
            return;
        }

        // Se encontrar um valor nulo navega até o final da lista:
        else if (a -> prox == NULL)
        {
            novo_x -> dado = x; // novo_x é inserido no final da lista
            novo_x -> prox = NULL; // Campo prox configurado como NULL
            a -> prox = novo_x; // Aponta para o novo_x
            return;
        }
        a = a -> prox; // Torna a = NULL
    }
}
