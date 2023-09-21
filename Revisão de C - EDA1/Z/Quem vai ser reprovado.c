#include <stdio.h>

int comparaString (char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] < str2[i])
        {
            return -1;
        }

        else if (str1[i] > str2[i])
        {
            return 1;
        }
        i++;
    }
}

int main ()
{

    int linhas;

    scanf ("%d", &linhas);

    char m1[linhas][1000];
    int pr[1000], menor = 11, instancia = 0;

    for (int cont = 0; cont < linhas; cont++)
    {
        scanf ("%s %d", m1[cont], &pr[cont]);

        if (pr[cont] < menor)
        {
            menor = pr[cont];
            instancia = cont;
        }

        else if (pr[cont] == menor)
        {
            int comparacao = comparaString (m1[instancia], m1[cont]);

            if (comparacao < 0)
            {
                menor = pr[cont];
                instancia = cont;
            }
        }
    }

    printf ("Instancia %d\n", instancia);
    printf ("%s", m1[instancia]);
    printf ("\n");

    return 0;
}
