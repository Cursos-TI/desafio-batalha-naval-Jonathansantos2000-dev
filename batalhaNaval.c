#include <stdio.h>

#define TAM 5

int main() {
    int tabuleiro[TAM][TAM] = {0};

    tabuleiro[0][1] = 1;
    tabuleiro[1][1] = 1;

    tabuleiro[3][2] = 1;
    tabuleiro[3][3] = 1;
    tabuleiro[3][4] = 1;

    printf("Coordenadas dos navios:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio na posicao: Linha %d, Coluna %d\n", i, j);
            }
        }
    }

    return 0;
}
