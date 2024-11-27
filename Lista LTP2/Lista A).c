#include <stdio.h>
#include <math.h>

// A) Fa�a um programa que leia dois n�meros e mostre qual deles � o maior.

int main(){
int x,y;

printf("Digite um n�mero: ");
scanf("%i",&x);
printf("Digite outro n�mero: ");
scanf("%i",&y);

if(x>y){
printf("O n�mero %i e maior",x);
}
else if(y>x){
printf("O n�mero %i e maior ",y);
}
else{
printf("ERRO!");
}

return 0;
}