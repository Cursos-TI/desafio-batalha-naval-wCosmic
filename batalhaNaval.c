#include <stdio.h>


int main() {
    
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}};

    for (int i = 0; i < 3; i++){ // Navio 1 na Coluna
    tabuleiro[i][3] = 3;}

    for (int j = 6; j < 9; j++){ // Navio 2 na Diagonal
        tabuleiro[j][j] = 3;}

    for (int j = 1; j < 4; j++){ //Navio 3 na Linha
        tabuleiro[6][j] = 3;}

        printf("Coordenadas:\n"); //Exibição Cordenadas
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (tabuleiro[i][j] == 3) {
                    printf("Navio na posição (%d, %d)\n", i, j);
                }
            }
        }

        printf("Tabuleiro:\n"); //Exibiçao do Tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}
