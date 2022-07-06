#include <stdio.h> // Inclui a biblioteca stdio.h ao nosso código.
#include <locale.h> // Inclui a biblioteca locale.h para definir o idioma e permitir acentuação.
// * stdio = standard input-output *

int main () { // Principal função do código .
setlocale(LC_ALL, ""); // Configura o idioma; "" = vazio = idioma do sistema.

// Declaração de variáveis: representação de valores variáveis;
// Declaração de constantes: representação de valores constantes;

// COMO DECLARAR UMA VARIÁVEL?
// Sintaxe:
// tipo nome;
                                                                    // Dentro da função main temos um bloco de comandos na linguagem C.
// TIPOS DE VARIÁVEIS:
// char -> caracter
// int -> inteiro simples
// long int -> inteiro longo
// float -> real de precisão simples
// double -> real de precisão dupla

// Exemplos:

int a, b;
float x, y;

// ENTRADA E SAÍDA DE DADOS:

// Exemplo de entrada:

printf ("Hello World!");
printf ("\n\nDigite o valor de a e b, respectivamente: ");
scanf ("%d %d", &a, &b);        // scanf: lê um valor da entrada padrão (teclado)

// Exemplo de saída:
printf ("\nO valor de a = %d e o valor de b = %d.\n", a, b);   // "%especificador", nome da variável -> informa o formato da variável e a variável a ser mostrada

// ESPECIFICADORES:

// %c caracter
// %d inteiro
// %ld inteiro longo
// %f float
// %lf double

return 0;     // "0" informando ao sistema operacional que o programa foi executado corretamente.
}

// MODIFICADORES:
// short, unsigned, long
