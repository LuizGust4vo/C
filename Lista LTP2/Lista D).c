#include <stdio.h>
#include <math.h>

// D) Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. Se a presta��o:
// I. For maior que 20% do sal�rio, imprima: �Empr�stimo n�o concedido.�;
// II. Caso contr�rio, imprima: �Empr�stimo concedido.�

int main(){
float ST,VPe;

printf("Digite o valor do sal�rio do trabalhador (em reais): ");
scanf("%f",&ST);
printf("Digite o valor da presta��o do empr�stimo (em reais): ");
scanf("%f",&VPe);

if(VPe>(ST/100)*20){
printf("Empr�stimo n�o concedido.");
}
else{
printf("Empr�stimo concedido.");
}

return 0;
}
