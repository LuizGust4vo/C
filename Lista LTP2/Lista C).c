#include <stdio.h>
#include <math.h>

// C) Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

int main(){
int N;

printf("Digite um número: ");
scanf("%i",&N);

if(N%2==0){
printf("O número é par");
}
else if(N%2==1){
printf("O número é ímpar");
}
else{
printf("ERRO!");
}

return 0;
}
