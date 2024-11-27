#include <stdio.h>
#include <math.h>

// Escreva um programa que, dada a idade de um nadador, o classifique em uma das seguintes categorias:
//
// Categorias: Infantil A   Infantil B    Juvenil A      Juvenil B      Sênior
// Idades:     5 a 7 anos   8 a 10 anos   11 a 13 anos   14 a 17 anos   + de 18 anos

int main(){
int idade;

printf("Digite a idade do nadador: ");
scanf("%i",&idade);

if(idade>=5 && idade<=7){
printf("Classificado na categoria Infantil A com sucesso!");
}
else if(idade>=8 && idade<=10){
printf("Classificado na categoria Infantil B com sucesso!");
}
else if(idade>=11 && idade<=13){
printf("Classificado na categoria Juvenil A com sucesso!");
}
else if(idade>=14 && idade<=17){
printf("Classificado na categoria Juvenil B com sucesso!");
}
else if(idade>=18 && idade<=70){
printf("Classificado na categoria Sênior com sucesso!");
}
else if(idade>70 || idade<5 && idade>0){
printf("Categoria indisponível para a sua idade ;(");
}
else if(idade<=0){
printf("ERRO: Idade Inválida!");
}
return 0;
}
