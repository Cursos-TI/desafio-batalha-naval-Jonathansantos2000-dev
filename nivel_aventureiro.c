#include <stdio.h>

#define TAM 10

int main() {
    int tabuleiro[TAM][TAM] = {0};

    // Posicionando quatro navios, dois deles na diagonal
    // Navio 1 - vertical
    tabuleiro[0][1] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][1] = 3;

    // Navio 2 - horizontal
    tabuleiro[4][4] = 3;
    tabuleiro[4][5] = 3;
    tabuleiro[4][6] = 3;

    // Navio 3 - diagonal
    tabuleiro[6][6] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][8] = 3;

    // Navio 4 - diagonal
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;
    tabuleiro[3][6] = 3;

    // Exibir o tabuleiro completo
    printf("Tabuleiro 10x10 (0 = vazio, 3 = navio):\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
