#include <stdio.h>
#include <string.h>

#define MAX 100

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {
    struct Aluno alunos[MAX];
    int n;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);  // lê com espaço
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Média: ");
        scanf("%f", &alunos[i].media);
    }

    printf("\nAlunos aprovados (média >= 7.0):\n");
    for (int i = 0; i < n; i++) {
        if (alunos[i].media >= 7.0) {
            printf("%s - Matrícula: %d - Média: %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].media);
        }
    }

    return 0;
}
