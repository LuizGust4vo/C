#include <stdio.h>
#include <locale.h>

// Expressão a ser processada, count como espécie de balança
int ChecaParenteses (char *expr, int count) // Função para verificar os parênteses de uma expressão matemática
{
    if (*expr == '\0') // Condição de parada
    {
        if (count == 0) return 0; // Retorna 0, se a expressão está perfeita

        if (count < 0) return -1; // Retorna -1, se '(' > ')'

        if (count > 0) return 1; // Retorna 1, se ')' > '('
    }

    if (*expr == '(') count--; // Quando encontra '(', subtrai 1
    // Números, operadores e outros caracteres são ignorados
    if (*expr == ')') count++; // Quando encontra ')', soma 1

    return ChecaParenteses (expr + 1, count); // Enquanto: *expr != '0', chama recursivamente a função
} // Avança para o próximo caracter da expressão, passa o saldo do count como parâmetro

int main()
{
    setlocale (LC_ALL, "pt_BR.UTF-8");
    char *exp1 = "((1 + 2) * (3 + 4))"; // Expressão 1
    char *exp2 = "((1 + 2) * (3 + 4)";  // Expressão 2
    char *exp3 = "((1 + 2) * 3 + 4))";  // Expressão 3

    printf ("Resultado para expressão 1: %d\n", ChecaParenteses (exp1, 0)); // Deve retornar 0
    printf ("Resultado para expressão 2: %d\n", ChecaParenteses (exp2, 0)); // Deve retornar -1
    printf ("Resultado para expressão 3: %d\n", ChecaParenteses (exp3, 0)); // Deve retornar 1

    return 0;
}
