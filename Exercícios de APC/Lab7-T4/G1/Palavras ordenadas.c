#include <stdio.h>

int main()
{
    int l, x, mul = 0;
    char p[47], n[47];

    scanf("%d", &l);

    for(int i = 0; i < l; i++)
    {
        scanf("%s", p);
        for(x = 0; p[x] != '\0'; x++)
        {
            n[x] = p[x];
            if(n[x] >= 'A' && n[x] <= 'Z')
            {
                n[x] += 32;
            }
        }
        n[x] = '\0';
        for(int y = 0; n[y] != '\0'; y++)
        {
            if(n[y] >= n[y + 1] && n[y + 1] != '\0')
            {
                mul++;
            }
        }
        if(mul == 0)
        {
            printf("%s: O\n", p);
        }
        else
        {
            printf("%s: N\n", p);
        }
        mul = 0;
    }

    return 0;
}
