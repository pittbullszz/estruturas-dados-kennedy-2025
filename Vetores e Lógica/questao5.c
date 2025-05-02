#include <stdio.h>
#include <stdbool.h>

int main() {
    int vetor1[5], vetor2[5];

    printf("Digite 5 números para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 5 números para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    printf("\nElementos comuns:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (vetor1[i] == vetor2[j]) {
                // Verifica se já foi impresso (para evitar repetição)
                bool jaImpresso = false;
                for (int k = 0; k < i; k++) {
                    if (vetor1[k] == vetor1[i]) {
                        jaImpresso = true;
                        break;
                    }
                }
                if (!jaImpresso) {
                    printf("%d\n", vetor1[i]);
                }
                break;
            }
        }
    }

    return 0;
}
