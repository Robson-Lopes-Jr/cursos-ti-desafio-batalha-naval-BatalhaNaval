#include <stdio.h>

int main (){

    int i, j;
    int linha = 0, coluna = 0, tamanho = 3;
    int linha1 = 7, coluna1 = 9, tamanho1 = 3;

    printf("Tabuleiro Batalha Naval\n");
    int matriz [10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    //posição do navio 1
    for (j = coluna; j < coluna + tamanho; j++)
    {
        matriz[linha][j] = 3;
    }
    
    //posição do navio 2
    for (i = linha1; i < linha1 + tamanho1; i++)
    {
        matriz[i][coluna1] = 3;
    }
    
    //imprimindo o tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}