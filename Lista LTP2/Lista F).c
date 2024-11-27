#include <stdio.h>
#include <math.h>
#include <string.h>

// F) Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes
// fórmulas (em que “h” corresponde à altura):
// I. Homens: "Altura – 100 – (altura – 150) ÷ 4,0";
// II. Mulheres: "Altura – 100 – (altura – 150) ÷ 2,5".

int main(){
float altura,PI;
char sexo[10];

printf("Para saber seu peso ideal");
printf("\nDigite sua altura (em centímetros): ");
scanf("%f",&altura);
printf("Digite seu sexo (M para masculino e F para feminino): ");
scanf("%s",sexo);

if(strcmp(sexo,"M")==0){
PI=(altura-100-(altura-150)/4);
printf("Peso ideal: %.2f",PI);
}
else if(strcmp(sexo,"F")==0){
PI=altura-100-(altura-150)/2,5;
printf("Peso ideal: %.2f",PI);
}

return 0;
}
