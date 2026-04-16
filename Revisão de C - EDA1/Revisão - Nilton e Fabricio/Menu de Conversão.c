#include <stdio.h>
#include <locale.h>
#include <ctype.h>

// PDF: Aula de Revisão de Linguagem C.
// Implemente um menu com três opções: C- Fahrenheit para Celsius, F- Celsius para Fahrenheit e S- Sair.
// Depois que o usuário optar por uma das duas primeiras opções, leia um valor float e mostre seu valor na respectiva escala.
// Caso o usuário opte pela opção S, encerre o programa.

void conversao ()
{
    char c;
    float T, c1, f1;

    printf ("---- MENU DE CONVERSÃO ----\n");
    printf ("\nC - Fahrenheit para Celsius\nF - Celsius para Fahrenheit\nS - Para Sair\n");
    printf ("\nDigite uma opção: ");
    scanf (" %c", &c);
    c = toupper(c); // c = tolower(c);

    if (c == 'S') return;

    printf ("Digite a temperatura a ser convertida: ");
    scanf ("%f", &T);

    switch (c)
    {
    case 'C':
        c1 = 5.0/9.0 * (T - 32);
        printf ("Temperatura covertida em graus Celius: %.1f\n", c1);
        break;

    case 'F':
        f1 = 9.0 / 5.0 * (T) + 32;
        printf ("Temperatura covertida em graus Fahrenheit: %.1f\n", f1);
        break;
    }
    printf ("\n");
    conversao ();
}

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    conversao ();

    return 0;
}
