#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura dos registros do dataset de pessoas
typedef struct
{
    char name[100];
    int age;
} TPessoa;

// Variáveis globais
TPessoa Data[100];
int dataCount = 0;

// Estrutura do nó da árvore ABP:
// Esta ABP tem valores menores à esquerda da raíz e valores maiores à direita da raiz.
typedef struct TABPNo
{
    int age;
    int index;
    struct TABPNo *left;
    struct TABPNo *right;
} TABPNo;

TABPNo* AlocaNo (TABPNo* root, int age, int index)
{
    if (root == NULL)
    {
        TABPNo* newNode = (TABPNo*) malloc(sizeof(TABPNo));

        newNode -> age = age;
        newNode -> index = index;
        newNode -> left = NULL;
        newNode -> right = NULL;

        return newNode;
    }

    if (age < root->age)
    {
        root -> left = AlocaNo (root -> left, age, index);

    }
    else if (age > root->age)
    {
        root -> right = AlocaNo (root -> right, age, index);
    }

    return root;
}

void PrintRelatorio (TABPNo* root)
{
    if (root == NULL) return;

    PrintRelatorio(root->left);
    printf ("Idade: %d, Nome: %s\n", root -> age, Data[root -> index].name);
    PrintRelatorio (root -> right);
}

TABPNo* Busca (TABPNo* root, int age)
{
    if (root == NULL) return NULL;

    if (root -> age == age)
    {
        return root;
    }

    if (age < root -> age)
    {
        return Busca (root -> left, age);
    }
    else
    {
        return Busca (root -> right, age);
    }
}

int DesalocaABP (TABPNo* root)
{
    if (root == NULL) return 0;

    int count = 1;
    count += DesalocaABP(root->left);
    count += DesalocaABP(root->right);

    free (root);
    return count;
}

// Função Fill: Gera uma ABP a partir de um um dataset (conjunto de registros do tipo TPessoa).
// dataCount é uma variável global do sistema. Armazena o total de nós da ABP.
TABPNo* Fill (TPessoa dataset[], int qtReistros)
{
    TABPNo* root = NULL;
    dataCount = 0;

    for (int i = 0; i < qtReistros; i++)
    {
        Data[i] = dataset[i];
        root = AlocaNo (root, Data[i].age, i);
        dataCount++;
    }

    return root;
}

int main()
{
    TABPNo *No, *root = NULL;
    int Idade, QtNosDesalocados;

    // Exemplo de dataset
    TPessoa dataset[3] =
    {
        {"Ana", 20},
        {"Carlos", 35},
        {"Eric", 22}
    };

    root = Fill (dataset, 3);

    scanf ("%d", &Idade);

    printf ("\n=== RELATORIO ===\n");
    PrintRelatorio (root); // Imprime um relatório por ordem de Idade

    No = Busca (root, Idade); // Função de busca de uma idade na ABP

    printf ("\n=== BUSCA ===");
    if (No != NULL)
    {
        printf ("\nPessoa encontrada: %s, idade %d.\n", Data[No -> index].name, No -> age);
    }

    else
    {
        printf ("\nIdade %d nao encontrada!\n");
    }

    QtNosDesalocados = DesalocaABP(root); // Função para desalocar ABP e retornar a qtd de nós desalocados

    printf ("\nPrograma finalizado com sucesso. Nos desalocados: %d\n", QtNosDesalocados);

    return 0;
}
