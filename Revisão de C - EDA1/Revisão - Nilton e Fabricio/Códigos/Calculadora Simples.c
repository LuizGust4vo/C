#include <stdio.h>
#include <locale.h>

// PDF: Aula de Revisão de Linguagem C.
// Usando as estruturas condicionais e de repetição (implemente um menu), crie um programa de calculadora que lê operações e
// valores do usuário e mostre o resultado na tela.

int main ()
{
    int o, a, b;
    setlocale(LC_ALL, "Portuguese");
    printf ("---- CALCULADORA ----\n");
    printf (" 1. Soma\n 2. Subtração\n 3. Multiplicação\n 4. Divisão\n\nDigite uma opção: ");
    scanf ("%d", &o);

    switch (o)
    {

    case 1:
        printf ("Digite as parcelas: ");
        scanf ("%d %d", &a, &b);
        printf ("Soma ou total = %d\n", a + b);
        break;

    case 2:
        printf ("Digite o minuendo e o subtraendo: ");
        scanf ("%d %d", &a, &b);
        printf ("Resto ou diferença = %d\n", a - b);
        break;

    case 3:
        printf ("Digite os fatores: ");
        scanf ("%d %d", &a, &b);
        printf ("Produto = %d\n", a * b);
        break;

    case 4:
        printf ("Digite o dividendo e o divisor: ");
        scanf ("%d %d", &a, &b);
        printf ("Quociente = %d\n", a / b);
        break;

    default:
        printf ("Opção inválida!\n");
        break;
    }

    return 0;

}
