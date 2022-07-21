#include <stdio.h>
#include <locale.h>

int main (){

setlocale (LC_ALL, "");

int L, l, C, c;

printf("Digite o número de linhas da matriz: ");
scanf ("%d", &L);
printf ("Digite o número de colunas da matriz: ");
scanf ("%d", &C);

printf ("\n");

for (l = 0; l < L; l++){
    for (c = 0; c < C; c++){
        printf ("[%03d, %03d] ", l, c);
    }
    printf ("\n");
}

return 0;
}
