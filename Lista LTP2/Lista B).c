#include <stdio.h>
#include <math.h>

// B) Fa�a um programa que leia dois n�meros e mostre o maior deles. Se, por acaso, os dois n�meros forem iguais, imprima a mensagem �N�meros iguais�.

int main(){
int x,y;

printf("Digite um n�mero: ");
scanf("%i",&x);
printf("Digite um n�mero: ");
scanf("%i",&y);

if(x>y){
printf("O n�mero %i e maior",x);
}
else if(y>x){
printf("O n�mero %i e maior ",y);
}
else if(x==y){
printf("N�meros iguais");
}

return 0;
}



