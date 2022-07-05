#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "");

int n1,n2;
int soma;

printf("Digite um Número: ");
scanf("%i",&n1);

printf("Digite um Número: ");
scanf("%i",&n2);

soma=n1+n2;
printf("A soma é igual = %i",soma);

return 0;
}
