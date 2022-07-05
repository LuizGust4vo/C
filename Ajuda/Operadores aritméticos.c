// OPERADORES ARITM�TICOS:

// Soma: +
// Subtra��o: -
// Divis�o: /
// Multiplica��o: *
// Resto da divis�o: %
// " Bin�rios "
// " 2 operadores "

// Incremento: ++
// Decremento: --
// " Un�rios "
// " 1 operador "

// Obs: para fazer outras opera��es, h� a biblioteca math.h com algumas outras fun��es.
// Exemplos:
// pow (a, b) -> Calcula a^b
// sqrt (a) -> Calcula raiz de a.

int main (){

int a, b, c;
a= 5, b = 21;
c = a + b; // c = 26
c = a * b; // c = 105
c = b / a; // c = 4 --- Obs: divis�o entre inteiros mostra apenas a parte inteira
c = b % a; // c = 1
a++; // = a + 1 = 6
b--; // = b - 1 = 20
a+=5; // = a + 5 = 10

// Preced�ncia de operadores: par�nteses -> multiplica��o/divis�o -> soma/subtra��o
// Obs: operadores de mesma preced�ncia s�o avaliados da esquerda para a direita.

return 0;
}
