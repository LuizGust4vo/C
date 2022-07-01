#include <stdio.h> // Inclui a biblioteca stdio.h ao nosso c�digo.
// * stdio = standard input-output *

int main () { // Principal fun��o do c�digo .

// Declara��o de vari�veis: representa��o de valores vari�veis;
// Declara��o de constantes: representa��o de valores constantes;

// COMO DECLARAR UMA VARI�VEL?
// Sintaxe:
// tipo nome;
                                                                    // Dentro da fun��o main temos um bloco de comandos na linguagem C.
// TIPOS DE VARI�VEIS:
// char -> caracter
// int -> inteiro simples
// long int -> inteiro longo
// float -> real de precis�o simples
// double -> real de precis�o dupla

// Exemplos:

int a, b;
float x, y;

// ENTRADA E SA�DA DE DADOS:

// Exemplo de entrada:

printf ("Hello World!");
printf ("\n\nDigite o valor de a e b, respectivamente: ");
scanf ("%d %d", &a, &b);        // scanf: l� um valor da entrada padr�o (teclado)

// Exemplo de sa�da:
printf ("\nO valor de a = %d e o valor de b = %d.\n", a, b);   // "%especificador", nome da vari�vel -> informa o formato da vari�vel e a vari�vel a ser mostrada

// ESPECIFICADORES:

// %c caracter
// %d inteiro
// %ld inteiro longo
// %f float/double
// %lf float/double longo

return 0;     // "0" informando ao sistema operacional que o programa foi executado corretamente.
}

// MODIFICADORES:
// short, unsigned, long
