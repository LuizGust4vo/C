#include <stdio.h>
#include <math.h>

// B) Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.

int main(){
int x,y;

printf("Digite um número: ");
scanf("%i",&x);
printf("Digite um número: ");
scanf("%i",&y);

if(x>y){
printf("O número %i e maior",x);
}
else if(y>x){
printf("O número %i e maior ",y);
}
else if(x==y){
printf("Números iguais");
}

return 0;
}



