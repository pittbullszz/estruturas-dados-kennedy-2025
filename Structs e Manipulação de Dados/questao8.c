#include <stdio.h>
#include <string.h>

#define MAX 100

struct Produto {
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
};

void cadastrarProdutos(struct Produto produtos[], int *n) {
    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
    }
}

void buscarProduto(struct Produto produtos[], int n) {
    int codigoBusca;
    printf("Digite o código do produto que deseja buscar: ");
    scanf("%d", &codigoBusca);

    for (int i = 0; i < n; i++) {
        if (produtos[i].codigo == codigoBusca) {
            printf("\nProduto encontrado:\n");
            printf("Nome: %s\n", produtos[i].nome);
            printf("Código: %d\n", produtos[i].codigo);
            printf("Quantidade: %d\n", produtos[i].quantidade);
            printf("Preço: %.2f\n", produtos[i].preco);
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

void listarProdutos(struct Produto produtos[], int n) {
    printf("\nLista de produtos:\n");
    for (int i = 0; i < n; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preço: %.2f\n", produtos[i].preco);
    }
}

int main() {
    struct Produto produtos[MAX];
    int n = 0;
    int opcao;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Cadastrar produtos\n");
        printf("2. Buscar produto por código\n");
        printf("3. Listar todos os produtos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProdutos(produtos, &n);
                break;
            case 2:
                buscarProduto(produtos, n);
                break;
            case 3:
                listarProdutos(produtos, n);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
