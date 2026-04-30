#include <stdio.h> // Biblioteca padrão para entrada e saída de dados
#include "structs.h" // Arquivo contendo as structs
#include <stdlib.h> // malloc, calloc, free
#include <locale.h> // Adaptação as regras de um país

void alocaEstoque (TEstoque *pEstoque)  // Função para quantidade de produtos a serem cadastrados
{
    printf ("Quantidade de produtos que deseja cadastrar: ");
    scanf("%d", &pEstoque -> qtdeProdutos);  // Leitura da quantidade de produtos

    pEstoque -> produtos = (TProduto *) malloc (pEstoque -> qtdeProdutos * sizeof (TProduto)); // Calcula o tamanho total (qtd * struct), reserva o bloco na memória e atribui o endereço ao ponteiro produtos.
}

void incluirProdutos (TEstoque *pEstoque)  // Função para cadastrar cada produto
{
    int contador = pEstoque -> qtdeProdutos; // Contador para quantidade de produtos

    for (int i = 0; i < contador; i++)  // Laço de repetição para cadastrar os produtos
    {
        printf ("\nDigite o ID do produto: ");
        scanf("%d", &pEstoque->produtos[i].id);  // Id

        printf ("Digite a quantidade do produto: ");
        scanf("%d", &pEstoque->produtos[i].quantidade);  // Qtd

        printf ("Digite o preço do produto: ");
        scanf("%f", &pEstoque->produtos[i].preco);  // Preço
    }
}

void listarProdutos (TEstoque *pEstoque)  // Função para listar os produtos cadastrados
{
    int contador = pEstoque -> qtdeProdutos; // Contador para quantidade de produtos

    for (int i = 0; i < contador; i++)  // Laço de repetição para imprimir os produtos cadastrados
    {
        int Id = pEstoque -> produtos[i].id; // Cria um inteiro para armazenar o id do produto
        int Qtd = pEstoque -> produtos[i].quantidade; // Cria um inteiro para armazenar a qtd do produto
        float Preco = pEstoque -> produtos[i].preco; // Cria um float para armazenar

        printf("\nID: %d | Quantidade: %d | Preço: %.2f", Id, Qtd, Preco);  // Impressão dos produtos cadastrados + organizado
    }
}

void desalocaEstoque (TEstoque *pEstoque)  // Função para liberar memória
{
    free (pEstoque -> produtos); // Libera a memória alocada pelo malloc
    pEstoque -> produtos = NULL; // Limpa o ponteiro, aponta para lugar nenhum
    pEstoque -> qtdeProdutos = 0; // Redefine o contador de produtos para zero

    printf("\n\nMemória liberada com sucesso.\n"); // Exibe a mensagem
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Português do Brasil e interprete de caracteres acentuados em UTF-8.

    TEstoque Estoque; // Cria a variável Estoque do tipo struct TEstoque

    // Execução das funções tendo a variável Estoque como parâmetro
    alocaEstoque (&Estoque);
    incluirProdutos (&Estoque);
    listarProdutos (&Estoque);
    desalocaEstoque (&Estoque);

    return 0;
}
