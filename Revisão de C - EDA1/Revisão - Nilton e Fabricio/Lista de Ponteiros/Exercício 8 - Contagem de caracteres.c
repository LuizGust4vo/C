#include <stdio.h>

// PDF: Lista de Ponteiros. Exercício 8 — Contagem de caracteres.

int conta (char *str, char c)
{
    char *p;
    int cs = 0;

    for (p = str; *p != '\0'; p++)
    {
        if (*p == c) cs++;
    }
    return cs;
}

int main ()
{
    char nome[] = "c";
    char letraC = 'c';

    printf ("Quantidade de c's = %d\n", conta (nome, letraC));

    return 0;
}
