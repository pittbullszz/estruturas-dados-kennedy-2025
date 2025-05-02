#include <stdio.h>

int buscaBinaria(int vetor[], int n, int chave) {
    int inicio = 0, fim = n - 1;
    
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        
        if (vetor[meio] == chave) {
            return meio; // chave encontrada
        } else if (vetor[meio] < chave) {
            inicio = meio + 1; // procurar à direita
        } else {
            fim = meio - 1; // procurar à esquerda
        }
    }
    
    return -1; // chave não encontrada
}

int main() {
    int n, chave;
    
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &n);
    
    int vetor[n];
    
    printf("Digite os elementos do vetor (em ordem crescente):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite o número a ser buscado: ");
    scanf("%d", &chave);
    
    int resultado = buscaBinaria(vetor, n, chave);
    
    if (resultado != -1) {
        printf("Elemento encontrado na posição: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
