#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{

    setlocale (LC_ALL, "");

    int n, m, B = 0, cont = 0;

    printf ("Digite a quantidade de linhas: ");
    scanf ("%d", &n);

    if (n >= 1 && n <= pow(10, 5)){
    do{
    scanf ("\n%d", &m);

    if (m > B) B = m;
    printf ("%d\n", m);
    printf ("%d\n\n", B);
    cont++;
    } while (cont < n);

    printf ("Maior número = %d", B);
    }
    else{
    printf ("\nValor(es) digitado(s) inválido(s)!\n");
    }

    return 0;
}
