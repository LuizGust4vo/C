#include <stdio.h>
#include <math.h>

// K) Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois.

int main(){
int N;

printf("Digite um número: ");
scanf("%i",&N);

if(N%3==0 || N%5==0){
printf("O número é divisível por 3 ou 5.");
}
else{
printf("O número não é divisível por 3 ou 5.");
}

return 0;
}
