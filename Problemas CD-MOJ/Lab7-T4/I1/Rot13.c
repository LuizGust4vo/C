#include <stdio.h>

int main()
{
    int n;
    char t[1000];

    scanf("%d", &n);
    char c = getchar();

    for(int i = 0; i < n; i++)
    {
        fgets(t, 1000, stdin);

        for(int j = 0; t[j] != '\0'; j++)
        {
            if(t[j] >= 'A' && t[j] <= 'M')
            {
                t[j] += 13;
            }

            else
            {
                if(t[j] >= 'N' && t[j] <= 'Z')
                {
                    t[j] -= 13;
                }
            }
        }
        printf("%s", t);
    }

    return 0;
}
