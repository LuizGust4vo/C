#include <stdio.h>
#include <locale.h>

int main (){

setlocale (LC_ALL, "");

int n, m, B = 0, cont = 0, soma = 0;

    printf ("Digite a quantidade de linhas: ");
    scanf ("%d", &n);
    printf ("\n");

    if (n > 0 && n <= 50){
    do
    {
        printf ("Digite um número: ");
        scanf ("%d", &m);
        if (m >= 1 && m <= 5000){
        soma += m;
        cont++;
        }
        else{
        printf ("\nValor(es) inválido(s)!\n");
        }
        } while (cont < n && m >= 1 && m <= 5000);

    printf ("\nSoma = %d\n", soma);
    }

return 0;
}
