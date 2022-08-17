#include <stdio.h>

void m (char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0')
    {
        s2[i] = tolower (s1[i]);
        i++;
    }
    s2[i] = '\0';
}

int main ()
{

    char str1[100], str2[100], nome[100], sobrenome[100];
    int b = 0, i = 0, cont = 0, y;

    scanf ("%[^\n]", str1);

    m (str1, str2);

    do
    {
        i++;
    }
    while (str1[i] != '\0');

    for (cont = 0; cont <= i; cont++)
    {
        if (str2[cont] == ' ' && b == 0)
        {
            b++;
            for (int a = 0; a < cont; a++)
            {
                nome[a] = str2[a];
            }
        }

        if (str2[cont] == ' ')
        {
            y = cont + 1;
            int c = cont;

            while (c <= i)
            {
                c++;
                sobrenome[c] = str2[c];

            }
        }
}

    printf ("%s.", nome);
    for (cont = y; cont < i; cont++){
    printf ("%c", sobrenome[cont]);
    }
    printf ("@unb.br");

    return 0;
}
