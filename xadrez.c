#include <stdio.h>


int main() {

    int i;

    // Movimentação da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita
    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}
