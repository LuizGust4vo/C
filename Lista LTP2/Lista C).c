#include <stdio.h>
#include <math.h>

// C) Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou �mpar.

int main(){
int N;

printf("Digite um n�mero: ");
scanf("%i",&N);

if(N%2==0){
printf("O n�mero � par");
}
else if(N%2==1){
printf("O n�mero � �mpar");
}
else{
printf("ERRO!");
}

return 0;
}
