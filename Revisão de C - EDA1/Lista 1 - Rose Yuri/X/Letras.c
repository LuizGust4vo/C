#include <stdio.h>

int main ()
{

    char letra, a, texto[10000];
    int cont = 0, rep = 0, x = 0;
    double p, pr = 0.0, palavras = 0.0;

    scanf ("%c", &letra);
    scanf ("%c", &a);
    scanf ("%[^\n]", texto);

    do
    {
        cont++;
    }
    while (texto[cont - 1] != '\0');

    for (int cont1 = 0; cont1 <= cont; cont1++)
    {
        if (texto[cont1] == ' ' || texto[cont1] == '\0')
        {
            palavras++;

            for (int cont2 = x; cont2 < cont1; cont2++)
            {
                if (texto[cont2] == letra) rep++;
            }
            if (rep > 0) pr++;
            x = cont1;
        }
        rep = 0;
    }

    p = (pr / (palavras - 1)) * 100;

    printf ("%.1lf\n", p);

    return 0;
}
