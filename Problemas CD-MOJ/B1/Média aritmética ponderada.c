#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "");

double x, X1, x2;
int p1, p2;

printf("Digite o valor da média aritmética ponderada: ");
scanf("%f", &x);
printf("Digite o valor do segundo elemento do conjunto: ");
scanf("%f", &x2);
printf("Digite os valores dos pesos 1 e 2, respectivamente: ");
scanf("%d %d", &p1, &p2);

X1 = x*p1;

printf ("O valor do primeiro elemento do conjunto = %f", X1);

return 0;
}

