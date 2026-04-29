#include <stdio.h>
#include <locale.h>
#include <string.h>

// PDF: Lista de Structs. Exercício 6 - Atualizando via ponteiro.

typedef struct
{
    char titular[64];
    float saldo;
} ContaBancaria;

void depositar (ContaBancaria *conta, float valor)
{
    conta -> saldo += valor;
}

int main ()
{
    ContaBancaria t1;
    float valorD;

    strcpy (t1.titular, "Luiz Gustavo");
    t1.saldo = 1000;

    printf ("Titular: %s\nSaldo: %.2f\n", t1.titular, t1.saldo);
    printf ("\nValor depositado: ");
    scanf ("%f", &valorD);

    depositar (&t1, valorD);

    printf ("\nTitular: %s\nSaldo atualizado: %.2f\n", t1.titular, t1.saldo);

    return 0;
}
