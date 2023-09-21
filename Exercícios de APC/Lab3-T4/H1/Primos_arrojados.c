#include <stdio.h>
#include <stdbool.h>

int isPrime(int n)
{
    int i;
    bool flag = true;

    if (n == 0 || n == 1)
        flag = false;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }

    return flag;
}

int main()
{
    int i, t, n, flag;
    scanf("%d", &t);

    int arr[t];

    for (i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < t; i++)
    {
        n = arr[i];
        flag = false;

        while (n != 0)
        {
            if (!isPrime(n))
            {
                flag = true;
                break;
            }

            n /= 10;
        }

        arr[i] = flag;
    }

    for (i = 0; i < t; i++)
    {
        printf("%s\n", arr[i] ? "N" : "S");
    }

    return 0;
}
