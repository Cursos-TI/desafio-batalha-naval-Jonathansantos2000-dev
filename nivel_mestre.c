#include <stdio.h>

#define TAM 5

void imprimirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int cone[TAM][TAM] = {0};
    int cruz[TAM][TAM] = {0};
    int octaedro[TAM][TAM] = {0};
    int centro = TAM / 2; // 2

    // Cone (triângulo invertido)
    cone[2][0] = 1;
    cone[1][1] = 1; cone[2][1] = 1; cone[3][1] = 1;
    for (int j = 0; j < TAM; j++) cone[2][j] = 1; // linha do meio preenchida

    // Cruz
    for (int j = 0; j < TAM; j++) cruz[2][j] = 1; // linha do meio toda preenchida
    for (int i = 0; i < TAM; i++) cruz[i][2] = 1; // coluna do meio toda preenchida

    // Octaedro (losango)
    octaedro[0][2] = 1;
    octaedro[1][1] = 1; octaedro[1][2] = 1; octaedro[1][3] = 1;
    octaedro[2][0] = 1; octaedro[2][1] = 1; octaedro[2][2] = 1; octaedro[2][3] = 1; octaedro[2][4] = 1;
    octaedro[3][1] = 1; octaedro[3][2] = 1; octaedro[3][3] = 1;
    octaedro[4][2] = 1;

    printf("Habilidade CONE:\n");
    imprimirMatriz(cone);

    printf("Habilidade CRUZ:\n");
    imprimirMatriz(cruz);

    printf("Habilidade OCTAEDRO:\n");
    imprimirMatriz(octaedro);

    return 0;
}

