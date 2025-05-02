#include <stdio.h>
#include <stdbool.h>

int main() {
    int numeros[10];
    bool contado[10] = {false}; // Marca quais posições já foram processadas

    // Leitura dos 10 números
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // Contagem de frequência
    printf("\nFrequência dos números:\n");
    for (int i = 0; i < 10; i++) {
        if (!contado[i]) {
            int contador = 1;
            for (int j = i + 1; j < 10; j++) {
                if (numeros[i] == numeros[j]) {
                    contador++;
                    contado[j] = true; // Marca como já contado
                }
            }
            printf("%d aparece %d vez(es)\n", numeros[i], contador);
        }
    }

    return 0;
}
