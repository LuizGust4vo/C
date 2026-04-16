#include <stdio.h>
#include <locale.h>

// PDF: Aula de Revisão de Linguagem C.
// Aplique estruturas de decisão e laços para verificar se um número fornecido pelo usuário é primo ou não.

int primo (int a)
{
    if (a == 1){
        return 1;
    }

    int x = 0;

    for (int cont = 2; cont <= (a / 2); cont++)
    {
        if (a % cont == 0) x++;
    }

    if (x > 0) return 1;
    else return 0;
}

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf ("Digite um número: ");
    scanf ("%d", &n);

    if (primo (n) == 1) printf ("O número não é primo.\n");
    else printf ("O número é primo.\n");

    return 0;
}
