#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int n1,n2;
    int soma;

    printf("Digite um Número: ");
    scanf("%i",&n1);

    printf("Digite um Número: ");
    scanf("%i",&n2);

    soma=n1+n2;
    printf("\nO resultado da soma é = %i\n",soma);

    return 0;
}
