#include <stdio.h>
#include <locale.h>

// Número a ser processado, contador de quantos dígitos o número possui, e soma de cada dígito
float MediaDig (int Numero, unsigned int Tamanho, float Soma) // Função para calcular a média dos dígitos
{
    if (Numero == 0) // Condição de parada, quando o número chegar a 0
    {
        if (Tamanho == 0) return 0; // No caso do número de entrada ser 0, para evitar a divisão por 0 (indefinido)
        return Soma / Tamanho; // Retorna o cálculo da média
    }

    return MediaDig (Numero / 10, Tamanho + 1, Soma + (Numero % 10)); // Enquanto: Numero != 0, chama recursivamente a função
} // Remove o último dígito, incrementa a contagem de dígitos, isola o último dígito para somá-lo ao total

int main()
{
    setlocale (LC_ALL, "Portuguese");

    printf ("Média dos dígitos: %.2f\n", MediaDig (1234, 0, 0));
    printf ("Média dos dígitos: %.2f\n", MediaDig (12345, 0, 0));
    printf ("Média dos dígitos: %.2f\n", MediaDig (0, 0, 0));

    return 0;
}
