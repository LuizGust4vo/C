#include <stdio.h>
#include <locale.h>

// PDF: Lista de Structs. Exercício 4 — Passagem por valor

typedef struct
{
    int id;
    char nome[50];
    int qtd;
    float preco;
} Produto;

void exibirProduto (Produto p)
{
    p = (Produto) {1, "Aliança", 5, 100.00};
    Produto *ptr = &p;

    printf ("ID: %d\n", p.id);
    printf ("Nome: %s\n", p.nome);
    printf ("Quantidade: %d\n", p.qtd);
    printf ("Preço: R$ %.2f\n", p.preco);
}

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    Produto pdt;

    exibirProduto (pdt);

    return 0;
}
