#include <stdio.h>

# define linha 10
# define coluna 10
# define navio 3

int main() {
        
    int i, j;
    int tabuleiro[5][5] = {0};
        
    printf(" \n BATALHA NAVAL \n");
    printf(" \n A  B  C  D  E \n\n");

    for (int i = 0; i < navio; i++){
        
        tabuleiro [ 0 ][ 0 + i] = 3; // horizontal
        tabuleiro [ 4 - i ][ 3 ] = 3; // vertical
    }    
        for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j++){
                printf(" %d ", tabuleiro[i][j]);    
            }
            printf("\n");        
        }
        printf("\n");


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int tabuleiro1[10][10] = {0};
    
    
    printf(" \n --------BATALHA NAVAL-------- \n\n");
    printf(" A  B  C  D  E  F  G  H  I  J  \n\n");

    for (int i = 0; i < navio; i++){
        
        tabuleiro1[2][4 + i] = 3; // horizontal
        tabuleiro1[5 + i][1] = 3; // vertical
        tabuleiro1[3 + i][3 + i] = 3; // diagonal principal
        tabuleiro1[6 + i][7 - i] = 3; // diagonal
    }
    
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf(" %d ", tabuleiro1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
