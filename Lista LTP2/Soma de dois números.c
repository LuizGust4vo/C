#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1,n2;
    int soma;

    printf("Digite um N�mero: ");
    scanf("%i",&n1);

    printf("Digite um N�mero: ");
    scanf("%i",&n2);

    soma=n1+n2;
    printf("\nO resultado da soma � = %i\n",soma);

    return 0;
}
