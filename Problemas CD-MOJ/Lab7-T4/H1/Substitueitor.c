#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "O maior do mundo";
    char palavra1[] = "do";
    char palavra2[] = "men";
    char str2[150] = { };

    for(int i = 0; str[i] != '\0';)
    {
        int j;

        for(j = 1; str[j] != ' ' && str[j] != '\0'; j++)
        {
            str[j] = '\0';
        }

        if(strcmp(&str[i],palavra1)==0)
        {
            strcat(str2,palavra2);
        }

        else
        {
            strcat(str2, &str[i]);
            strcat(str2,  " ");
            i = j + 1;
        }
    }

    printf("%s\n",str2);

    return 0;
}
