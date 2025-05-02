#include <stdio.h>

int inverterNumero(int n) {
    int invertido = 0;
    while (n != 0) {
        int digito = n % 10;        // Pega o último dígito
        invertido = invertido * 10 + digito; // Coloca o dígito no final do número invertido
        n /= 10; // Remove o último dígito
    }
    return invertido;
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    int numeroInvertido = inverterNumero(numero);
    printf("Número invertido: %d\n", numeroInvertido);
    
    return 0;
}
