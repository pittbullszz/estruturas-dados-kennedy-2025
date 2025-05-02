#include <stdio.h>

int main() {
    int matriz[4][4];
    int somaDiagonal = 0;

    // Leitura da matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma da diagonal principal
    for (int i = 0; i < 4; i++) {
        somaDiagonal += matriz[i][i]; // Elementos da diagonal principal
    }

    printf("A soma da diagonal principal é: %d\n", somaDiagonal);

    return 0;
}
