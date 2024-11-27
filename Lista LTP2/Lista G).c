#include <stdio.h>
#include <math.h>
#include <string.h>

// G) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto.
// Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto
// acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.
// Estado   MG SP  RJ  MS
// Imposto  7% 12% 15% 8%

int main(){
float valor,valorCIE;
char estado[30];

printf("Digite o valor do produto em reais (R$): ");
scanf("%f",&valor);
printf("Digite a sigla do estado de destino do produto (MG, SP, RJ ou MS): ");
scanf("%s",estado);

if(strcmp(estado,"MG")==0){
valorCIE=valor+((valor/100)*7);
printf("Valor do produto para o estado de MG em reais (R$): %.2f",valorCIE);
}
else if(strcmp(estado,"SP")==0){
valorCIE=valor+((valor/100)*12);
printf("Valor do produto para o estado de SP em reais (R$): %.2f",valorCIE);
}
else if(strcmp(estado,"RJ")==0){
valorCIE=valor+((valor/100)*15);
printf("Valor do produto para o estado de RJ em reais (R$): %.2f",valorCIE);
}
else if(strcmp(estado,"MS")==0){
valorCIE=valor+((valor/100)*8);
printf("Valor do produto para o estado de MS em reais (R$): %.2f",valorCIE);
}
else{
printf("ERRO: Estado Inválido!");
}

return 0;
}
