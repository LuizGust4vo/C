#include <stdio.h>
#include <math.h>

// I) Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse n�mero.
// Isto �, domingo, se 1, segunda-feira, se 2, e assim por diante

int main(){
int N;

printf("Digite um n�mero entre 1 e 7: ");
scanf("%i",&N);

switch(N){
case 1: printf("Dia da semana correspondente: Domingo.\n"); break;
case 2: printf("Dia da semana correspondente: Segunda-Feira.\n"); break;
case 3: printf("Dia da semana correspondente: Ter�a-Feira.\n"); break;
case 4: printf("Dia da semana correspondente: Quarta-Feira.\n"); break;
case 5: printf("Dia da semana correspondente: Quinta-Feira.\n"); break;
case 6: printf("Dia da semana correspondente: Sexta-Feira.\n"); break;
case 7: printf("Dia da semana correspondente: S�bado.\n"); break;
default: printf("ERRO: Valor digitado n�o est� entre 1 e 7.");
}

return 0;
}
