#include <stdio.h>

int cont = 0;
int a;

char inverte (char *s, char *ns)
{
    if (s[cont] == '\0')
    {
        return ns;
    }

    else
    {
        if (cont == 0)
        {
            a = strlen (s);
            ns[a] = '\0';
        }

        ns[cont] = s[a - 1];
        cont++;
        a--;

        return inverte (s, ns);
    }
}

int main ()
{

    char str[501], nstr[501];

    scanf ("%s", str);

    inverte (str, nstr);

    printf ("%s\n", nstr);

    return 0;
}
