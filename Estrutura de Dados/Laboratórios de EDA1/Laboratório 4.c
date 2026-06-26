#include <stdio.h>  // Entrada e saída
#include <stdlib.h> // Gerenciamento de memória
// 0 = desbalanceado | 1 = balanceado

// Tipo pilha
typedef struct no    // Definição do nó
{
    char caracter;      // Informação que queremos armazenar
    struct no *proximo; // Ponteiro que liga este nó ao elemento que está abaixo dele na linha
} No; // Apelido/nome do nó

// Função que insere um novo elemento no topo da pilha
No *Empilha (No *pilha, char x)
{
    No *novoNo = (No *) malloc(sizeof(No)); // Espaço para o novo elemento (topo)
    novoNo -> caracter = x; // Guarda o caractere recebido dentro do nó
    novoNo -> proximo = pilha; // Faz o ponteiro próximo desse novo nó apontar para o antigo topo da pilha
    return novoNo; // Retorna esse novoNo, que agora é o novo topo da pilha
}

// Função que remove o topo da pilha e libera memória
No *Desempilha (No *pilha)
{
    No *aux = pilha; // Cria um ponteiro temporário para segurar o topo atual
    pilha = pilha -> proximo; // Atualiza o topo da pilha
    free (aux); // Libera a memória utilizada pelo topo antigo
    return pilha; // Retorna o novo topo
}

// Função que verifica se os caracteres formam um par válido
int forma_par (char fechamento, char topo)
{
    if (topo == '(' && fechamento == ')') return 1;
    if (topo == '[' && fechamento == ']') return 1;
    if (topo == '{' && fechamento == '}') return 1;
    return 0; // Se não for nenhuma das condições acima, retorna 0
}

// Função que percorre a string digitada do início ao fim, e usa a estrutura de pilha para fazer a verificação de balanceamento
int identifica_formacao (char x[]) // Inicia recebendo a string
{
    No *pilha = NULL; // Declaração da pilha vazia
    int i = 0; // Contador em 0 para percorrer a palavra letra por letra

    while (x[i] != '\0')  // Inicia um laço que percorre a string inteira
    {
        if (x[i] == '(' || x[i] == '[' || x[i] == '{')  // Se o caracter atual for de abertura
        {
            pilha = Empilha (pilha, x[i]); // Empilha no topo
        }
        else if (x[i] == ')' || x[i] == ']' || x[i] == '}')  // Se o caracter atual for de fechamento
        {
            if (pilha == NULL) // Verifica se a pilha está vazia, pois não dá pra fechar o que nunca foi aberto
            {
                return 0; // Retorna 0
            }
            if (forma_par (x[i], pilha -> caracter) == 0) // Verifica se o fechamento forma par com o topo (! inverte a lógica)
            {                                             // OU, !forma_par (x[i], pilha -> caracter)
                return 0; // Se NÃO FORMA par, retorna 0
            }
            // Se FORMA par, ignora o bloco do if anterior e chama a função Desempilha
            pilha = Desempilha(pilha);
        }
        i++; // Soma i++ para ir para o próximo caracter
    }

    if (pilha == NULL) // Fim da leitura da string, pilha termina vazia
    {
        return 1; // Todas aberturas estão fechadas, logo, retorna 1
    }
    return 0; // Se ainda sobrou algo aberto, retorna 0
}

// Função Main
int main()
{
    char exp[50]; // Porta de entrada
    int retorno; //

    scanf("%49[^\n]", exp); // Leitura de TUDO até 49 caracteres, deixando um espaço para \0
    retorno = identifica_formacao (exp); // Envia o texto lido para a função de validação, salvando o resultado em retorno

    if (retorno == 1)
        printf ("BALANCEADA\n"); // Saída Final 1

    else
        printf ("DESBALANCEADA\n"); // Saída Final 0

    return 0;
}
