#include <stdio.h>

// PDF: Lista de Ponteiros. Exercício 11 — Comparação de strings.

// 0, se s1 = s2
// 0, se s1 > s2
// 1, se s1 < s2

int compara(char *s1, char *s2)
{
    char *p1 = s1, *p2 =  s2;
    int t1 = 0, t2 = 0;

    for (p1; *p1 != '\0'; p1++)
    {
        t1++;
    }
    for (p2; *p2 != '\0'; p2++)
    {
        t2++;
    }

    if (t1 == t2 || t1 > t2) return 0;

    else return 1;

}

int main()
{
    char c1[] = {"teste"}, c2[] = {"teste"};

    printf ("%d\n", compara(c1, c2));

    return 0;
}
