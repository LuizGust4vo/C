#include <stdio.h>

int main (){

int tamanho, soma = 0, maiorC = 0;

scanf ("%d", &tamanho);
int m[tamanho][tamanho];

for (int l = 0; l < tamanho; l++){
for (int c = 0; c < tamanho; c++){
scanf ("%d", &m[l][c]);
}}

for (int c = 0; c < tamanho; c++){
for (int l = 0; l < tamanho; l++){
soma = soma + m[l][c];
if (soma > maiorC) maiorC = c + 1;
}
soma = 0;
}

printf ("\n%d", maiorC);

return 0;
}
