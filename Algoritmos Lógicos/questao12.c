#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        // Ignora espaços em branco e converte para minúsculas para comparar de forma case-insensitive
        if (isspace(str[inicio])) {
            inicio++;
        } else if (isspace(str[fim])) {
            fim--;
        } else if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0; // Não é palíndromo
        } else {
            inicio++;
            fim--;
        }
    }

    return 1; // É palíndromo
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // Lê a string incluindo espaços

    // Remove o '\n' do final da string
    str[strcspn(str, "\n")] = 0;

    if (ehPalindromo(str)) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}
