#include <stdio.h>
#include <math.h>

// D) Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
// I. For maior que 20% do salário, imprima: “Empréstimo não concedido.”;
// II. Caso contrário, imprima: “Empréstimo concedido.”

int main(){
float ST,VPe;

printf("Digite o valor do salário do trabalhador (em reais): ");
scanf("%f",&ST);
printf("Digite o valor da prestação do empréstimo (em reais): ");
scanf("%f",&VPe);

if(VPe>(ST/100)*20){
printf("Empréstimo não concedido.");
}
else{
printf("Empréstimo concedido.");
}

return 0;
}
