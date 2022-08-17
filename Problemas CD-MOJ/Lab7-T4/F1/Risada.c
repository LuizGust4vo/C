#include <stdio.h>

int ContaV (char str1[60], char str2[60], char inv[60])
{
    int t = 0, c = -1, y = -1, cont3 = 0;
    const char vogal[] = "aeiou";
    do
    {
        t++;
    }
    while (str1[t] != '\0');

    for (int cont = 0; cont <= t; cont++)
    {
        for (int a = 0; a < 5; a++)
        {
            if (str1[cont] == vogal[a])
            {
                c++;
                str2[c] = str1[cont];
            }
        }
    }

    if (c == -1)
    {
        printf ("\nValor invalido!");
    }

    else
    {
        for(int cont1 = c; cont1 >= 0; cont1--)
        {
            y++;
            inv[y] = str2[cont1];
        }
        for (int cont2 = 0; cont2 <= c; cont2++)
        {
            if (str2[cont2] == inv[cont2]) cont3++;
        }
        if (cont3 == c + 1)
        {
            printf ("\nS");
        }
        else
        {
            printf ("\nN");
        }
    }
}

int main()
{
    char str1[60], str2[60], inv[60];

    scanf ("%s", str1);

    ContaV (str1, str2, inv);

    return 0;
}
