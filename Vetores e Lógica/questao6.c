#include <stdio.h>

int main() {
    int matriz1[3][3], matriz2[3][3], resultado[3][3];

    printf("Digite os valores da primeira matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Soma das matrizes
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Exibição do resultado
    printf("\nMatriz resultante da soma:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
