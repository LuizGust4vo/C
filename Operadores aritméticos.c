// OPERADORES ARITMÉTICOS:

// Soma: +
// Subtração: -
// Divisão: /
// Multiplicação: *
// Resto da divisão: %
// " Binários "
// " 2 operadores "

// Incremento: ++
// Decremento: --
// " Unários "
// " 1 operador "

// Obs: para fazer outras operações, há a biblioteca math.h com algumas outras funções.
// Exemplos:
// pow (a, b) -> Calcula a^b
// sqrt (a) -> Calcula raiz de a.

int main (){

int a, b, c;
a= 5, b = 21;
c = a + b; // c = 26
c = a * b; // c = 105
c = b / a; // c = 4 --- Obs: divisão entre inteiros mostra apenas a parte inteira
c = b % a; // c = 1
a++; // = a + 1 = 6
b--; // = b - 1 = 20
a+=5; // = a + 5 = 10

// Precedência de operadores: parênteses -> multiplicação/divisão -> soma/subtração
// Obs: operadores de mesma precedência são avaliados da esquerda para a direita.

return 0;
}
