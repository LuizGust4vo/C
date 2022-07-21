#include <stdio.h>
#include <locale.h>

int main (){

setlocale (LC_ALL, "");

int d, r, c, m1, m2, melhor[3], m = 0, nota, n = 0, cont1 = 0;

printf ("Digite quantos dias de viagem: ");
scanf ("%d", &d);
printf ("\n");

do {
printf ("Digite quantos restaurantes existem na cidade: ");
scanf ("%d", &r);
for (int a = 0; a < r; a++){
printf ("Digite o código e a nota do restaurante: ");
scanf ("%d %d", &c, &nota);

if (nota >= m && c <= melhor){
m = nota;
m2 = c;
}
else if (nota >= m){
m = nota;
m2 = c;
}
melhor[a] = m2;
}
cont1++;
} while (cont1 < d);

for (int cont2 = 1; cont2 <= d; cont2++){
for (int z = 0; z < 3; z++){
printf ("\nDia %d\n", cont2);
printf ("Código do restaurante %d: %d \n", cont2, melhor[cont2]);
}}

return 0;
}
