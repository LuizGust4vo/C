#include <stdio.h>
#include <math.h>

// J) Fa�a um programa que mostre ao usu�rio um menu com quatro op��es de opera��es matem�ticas (as opera��es b�sicas, por exemplo).
// O usu�rio escolhe uma das op��es, e o seu programa pede dois valores num�ricos e realiza a opera��o, mostrando o resultado.

int main(){
char OP;
float N1,N2,soma,sub,div,mult;

printf("........... MENU ...........");
printf("\n............................");

printf("\n\n1.Soma");
printf("\n2.Subtra��o");
printf("\n3.Divis�o");
printf("\n4.Multiplica��o");

printf("\n\nEscolha uma das op��es acima: ");
scanf("%c",&OP);

system("cls");

switch(OP){
case '1': printf("Digite a primeira e a segunda parcela: ");
          scanf("%f %f",&N1,&N2);
          soma=N1+N2;
          printf("\nSoma ou Total: %.2f",soma);
          break;
case '2': printf("Digite o minuendo e em seguida o subtraendo: ");
          scanf("%f %f",&N1,&N2);
          sub=N1-N2;
          printf("\nResto ou Diferen�a: %.2f",sub);
          break;
case '3': printf("Digite o dividendo e em seguida o divisor: ");
          scanf("%f %f",&N1,&N2);
          div=N1/N2;
          printf("\nQuociente: %.2f",div);
          break;
case '4': printf("Digite o primeiro e o segundo fator: ");
          scanf("%f %f",&N1,&N2);
          mult=N1*N2;
          printf("\nProduto: %.2f",mult);
          break;
default: printf("ERRO: Op��o Inv�lida!");
}

return 0;
}
