#include <stdio.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int remove_depois (celula *p)
{
    celula *rem = p -> prox;

    if (rem)
    {
        p -> prox = p -> prox -> prox;

        return rem -> dado;
    }

    else
    {
        return 0;
    }
}

void remove_elemento (celula *le, int x)
{
    celula *a = le;

    while (a -> prox)
    {
        if (a -> prox -> dado == x)
        {
            a -> prox = a -> prox -> prox;

            return;
        }
        a = a -> prox;
    }
}

void remove_todos_elementos (celula *le, int x)
{
    celula *a = le;

    while (a -> prox)
    {
        if (a -> prox -> dado == x)
        {
            a -> prox = a -> prox -> prox;
        }

        else if (a -> prox)
        {
            a = a -> prox;
        }
    }
}
