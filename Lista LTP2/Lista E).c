#include <stdio.h>
#include <math.h>

// E) Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
// I. O n�mero digitado ao quadrado;
// II. A raiz quadrada do n�mero digitado.

int main(){
float N,NaQ,RQdN;

printf("Digite um n�mero: ");
scanf("%f",&N);

if(N>0){
NaQ=pow(N,2);
RQdN=sqrt(N);
printf("O n�mero digitado ao quadrado: %.2f",NaQ);
printf("\nA raiz quadrada do n�mero digitado: %.3f",RQdN);
}
else if(N<=0){
printf("O n�mero � negativo ou igual a zero");
}
else{
printf("ERRO!");
}

return 0;
}
