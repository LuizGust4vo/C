#include <stdio.h>
#include <string.h>

int main ()
{

    long int t1, t2, i = 0;

    scanf ("%ld %ld", &t1, &t2);
    char str1[t1][100], str2[t2][100];

    for (int l1 = 0; l1 < t1; l1++)
    {
        scanf ("%s", str1[l1]);
    }

    for (int l2 = 0; l2 < t2; l2++)
    {
        scanf ("%s", str2[l2]);
    }

    for (int l = 0; l < t1; l++)
    {
        for (int l3 = 0; l3 < t2; l3++)
        {
            if (strcmp (str2[l3], str1[l]) == 0) i++;
        }
    }

    if (i == t2) printf ("\n1");

    else printf ("\n0");

    return 0;
}
