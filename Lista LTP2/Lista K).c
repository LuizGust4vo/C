#include <stdio.h>
#include <math.h>

// K) Fa�a um programa para verificar se determinado n�mero inteiro lido � divis�vel por 3 ou 5, mas n�o simultaneamente pelos dois.

int main(){
int N;

printf("Digite um n�mero: ");
scanf("%i",&N);

if(N%3==0 || N%5==0){
printf("O n�mero � divis�vel por 3 ou 5.");
}
else{
printf("O n�mero n�o � divis�vel por 3 ou 5.");
}

return 0;
}
