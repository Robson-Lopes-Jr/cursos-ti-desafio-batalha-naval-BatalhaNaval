#include <stdio.h>

#define linhas 10
#define colunas 10

int main (){

    int matriz [linhas][colunas] = {0};
    int linha = 0, coluna = 0, tamanho = 3;
    int linha1 = 7, coluna1 = 9, tamanho1 = 3;
    int linha2 = 0, coluna2 = 5, tamanho2 = 3;
    int linha3 = 2, coluna3 = 4, tamanho3 = 3;

    printf("Tabuleiro Batalha Naval\n");

    // posição do navio horizontal
    for (int j = coluna; j < coluna + tamanho; j++) {
        matriz[linha][j] = 3;
    }
    
    // posição do navio vertical
    for (int i = linha1; i < linha1 + tamanho1; i++) {
        matriz[i][coluna1] = 3;
    }
    
    // posição do 1º navio diagonal
    for (int k = 0; k < tamanho2; k++) {
        matriz[linha2 + k][coluna2 + k] = 3;
    }

    // posição do 2º navio diagonal
    for (int k = 0; k < tamanho3; k++) {
        matriz[linha3 + k][coluna3 - k] = 3;
    }

    // imprimindo o tabuleiro
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
