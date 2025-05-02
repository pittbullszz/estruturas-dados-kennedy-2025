#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contato {
    char nome[50];
    char telefone[20];
    char email[50];
};

void adicionarContato(struct Contato contatos[], int *n) {
    if (*n >= MAX) {
        printf("Agenda cheia.\n");
        return;
    }

    printf("\nContato %d:\n", *n + 1);
    printf("Nome: ");
    scanf(" %[^\n]", contatos[*n].nome);
    printf("Telefone: ");
    scanf(" %[^\n]", contatos[*n].telefone);
    printf("Email: ");
    scanf(" %[^\n]", contatos[*n].email);

    (*n)++;
}

void buscarContato(struct Contato contatos[], int n) {
    char nomeBusca[50];
    printf("Digite o nome a ser buscado: ");
    scanf(" %[^\n]", nomeBusca);

    for (int i = 0; i < n; i++) {
        if (strcmp(contatos[i].nome, nomeBusca) == 0) {
            printf("\nContato encontrado:\n");
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("Email: %s\n", contatos[i].email);
            return;
        }
    }

    printf("Contato não encontrado.\n");
}

void listarContatos(struct Contato contatos[], int n) {
    printf("\n--- Lista de Contatos ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nContato %d:\n", i + 1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("Email: %s\n", contatos[i].email);
    }
}

int main() {
    struct Contato contatos[MAX];
    int n = 0;
    int opcao;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Adicionar contato\n");
        printf("2. Buscar contato por nome\n");
        printf("3. Listar todos os contatos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato(contatos, &n);
                break;
            case 2:
                buscarContato(contatos, n);
                break;
            case 3:
                listarContatos(contatos, n);
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
