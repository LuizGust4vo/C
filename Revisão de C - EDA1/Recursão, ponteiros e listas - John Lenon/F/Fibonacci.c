#include <stdio.h>

// Define o tamanho máximo do array memo
#define MAX_DEPTH 80

long int fibonacci (int n)
{
    // Mantém o maior valor de n
    static unsigned long long max_n = 1;
    // Array para armazenar os valores intermediários da sequência
    static unsigned long long memo[MAX_DEPTH];

    // Valores iniciais da sequência
    memo[0] = 0;
    memo[1] = 1;

    if (n <= max_n)
        return memo[n];

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    max_n = n;

    return memo[n];
}

/*
Essa implementação economiza memória ao armazenar resultados intermediários,
impedindo recálculos desnecessários. Ela é eficaz para calcular números de
Fibonacci de até 80 ou menos, dependendo do valor de MAX_DEPTH. Tenha em
mente que os números de Fibonacci crescem rapidamente, então calcular valores
muito grandes pode resultar em estouro de memória ou tempo de execução longo.
*/
