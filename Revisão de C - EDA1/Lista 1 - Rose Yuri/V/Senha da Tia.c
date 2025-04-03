#include <stdio.h>

int main ()
{

    int car, min, max, num;
    char senha[10000];
    int cont = 0, m1 = 0, m2 = 0, n = 0;

    scanf ("%d %d %d %d", &car, &min, &max, &num);
    scanf ("%s", senha);

    do
    {
        cont++;
    }
    while (senha[cont] != '\0');

    if (cont >= car)
    {
        for (int cont1 = 0; cont1 < cont; cont1++)
        {
            if (senha[cont1] >= 'a' && senha[cont1] <= 'z') m1++;
        }
        if (m1 >= min)
        {
            for (int cont2 = 0; cont2 < cont; cont2++)
            {
                if (senha[cont2] >= 'A' && senha[cont2] <= 'Z') m2++;
            }
            if (m2 >= max)
            {
                for (int cont3 = 0; cont3 < cont; cont3++)
                {
                    if (senha[cont3] >= '0' && senha[cont3] <= '9') n++;
                }
                if (n >= num)
                {
                    printf("Ok =/\n");
                }
                else
                {
                    printf ("Ufa :)\n");
                }
            }
            else
            {
                printf ("Ufa :)\n");
            }
        }
        else
        {
            printf ("Ufa :)\n");
        }
    }

    else
    {
        printf ("Ufa :)\n");
    }

    return 0;
}
