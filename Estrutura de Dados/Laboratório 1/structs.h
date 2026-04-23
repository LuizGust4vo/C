typedef struct{
    int id; // Código do produto
    int quantidade; // Quantitativo do produto em estoque
    float preco; // Preço unitario do produto
} TProduto;

typedef struct{
    int qtdeProdutos; // Quantidade maxima de diferentes produtos (QMP)
    TProduto *produtos; // Vetor contendo os detalhes de cada produto
} TEstoque;
