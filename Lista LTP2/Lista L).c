#include <stdio.h>
#include <math.h>

// L) Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule e mostre as raízes
// dessa equação, lembrando que as raízes são calculadas com a Fórmula de Bhaskara:

// em que Δ = b2 – 4 * a * c. E ax^2 + bx + c = 0, representa uma equação do segundo grau.

// A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”.

// Do contrário, imprima:
// Se Δ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
// Se Δ = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
// Se Δ > 0, existem duas raízes reais. Imprima as raízes.

int main(){
float a,b,c,r1,r2,ru,delta,rd,pb;

printf("Digite o valor da variável a: ");
scanf("%f",&a);
printf("Digite o valor da variável b: ");
scanf("%f",&b);
printf("Digite o valor da variável c: ");
scanf("%f",&c);

pb=pow(b,2);
delta=pb-(4*a*c);

if(a==0){
printf("Não é equação do segundo grau.");
}
else if(delta<0){
printf("Não existe raiz real.");
}
else if(delta==0){
ru=-b/(2*a);
printf("Raiz única: %.2f",ru);
}
else if(delta>0){
rd=sqrt(delta);
r1=(-b+rd)/(2*a);
r2=(-b-rd)/(2*a);
printf("Existem duas raízes reais:");
printf("\nRaiz 1: %.2f",r1);
printf("\nRaiz 2: %.2f",r2);
}
else{
printf("ERRO!");
}

return 0;
}
