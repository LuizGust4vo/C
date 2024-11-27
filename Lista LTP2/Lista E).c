#include <stdio.h>
#include <math.h>

// E) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
// I. O número digitado ao quadrado;
// II. A raiz quadrada do número digitado.

int main(){
float N,NaQ,RQdN;

printf("Digite um número: ");
scanf("%f",&N);

if(N>0){
NaQ=pow(N,2);
RQdN=sqrt(N);
printf("O número digitado ao quadrado: %.2f",NaQ);
printf("\nA raiz quadrada do número digitado: %.3f",RQdN);
}
else if(N<=0){
printf("O número é negativo ou igual a zero");
}
else{
printf("ERRO!");
}

return 0;
}
