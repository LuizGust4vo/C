typedef struct
{
    int id;  //Código do produto
    int quantidade;  //Quantitativo do produto em estoque (QMP)
    float preco;  //Preço unitário do produto.
} TProduto;

typedef struct
{
    int qtdeProdutos;  //Quantidade máxima de diferentes produtos
    TProduto *produtos; //Vetor contendo os detalhes de cada produto
} TEstoque;
