#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Nível Novato - Posicionamento dos Navios
// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
// Nível Mestre - Habilidades Especiais com Matrizes

// Criando constantes para representar linhas, colunas e o tamanho maximo dos navios (3 casas)
#define LINHAS_TABULEIRO 10
#define COLUNAS_TABULEIRO 10
#define TAM_MAX_NAVIO 3

int main() {
    // Declarando Matriz e Vetor (Tabuleiro e Coluna)
    int tabuleiro[LINHAS_TABULEIRO][COLUNAS_TABULEIRO];
    char letras_colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    // Número que representamos os navios
    int representar_navios = 3;

    // Possiveis posições dos navios
    int pos_vertical = 3, pos_horizontal = 3, pos_diagonal_1 = 0, pos_diagonal_2 = 7;

    // Titulo
    printf("-------------------------\n");
    printf(" TABULEIRO BATALHA NAVAL\n");
    printf("-------------------------\n");
    printf("    ");

    // Declarando valores aos indices do Tabuleiro
    for (int i = 0; i < LINHAS_TABULEIRO; i++) {
        for (int j = 0; j < COLUNAS_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posições dos Navios (Horizontal/Vertical/Diagonal)
    for (int i = 0; i < LINHAS_TABULEIRO; i++) {
        for (int j = 0; j < COLUNAS_TABULEIRO; j++) {
            if (pos_horizontal < 6) {
                tabuleiro[0][pos_horizontal] = representar_navios;
                pos_horizontal++;
            } else if (pos_vertical < 6) {
                tabuleiro[pos_vertical][9] = representar_navios;
                pos_vertical++;
            } else if (pos_diagonal_1 < 3) {
                tabuleiro[pos_diagonal_1][pos_diagonal_1] = representar_navios;
                pos_diagonal_1++;
            } else if (pos_diagonal_2 <= 9) {
                tabuleiro[pos_diagonal_2][11-pos_diagonal_2] = representar_navios;
                pos_diagonal_2++;
            }
        }
    }

    // Adicionando habilidades no tabuleiro
    // Cone
    for (int i = 0; i < LINHAS_TABULEIRO; i++) {
        for (int j = 0; j < COLUNAS_TABULEIRO; j++) {
            if (i == 6 && j == 7) {
                tabuleiro[i][j] = 1;
            } else if (i == 7 && j >= 6 && j <= 8) {
                tabuleiro[i][j] = 1;
            } else if (i == 8 && j >= 5 && j <= 9) {
                tabuleiro[i][j] = 1;
            }
        }
    }

    // Cruz
    for (int i = 0; i < LINHAS_TABULEIRO; i++) {
        for (int j = 0; j < COLUNAS_TABULEIRO; j++) {
            if (i >= 4 && i <= 8 && j == 2) {
                tabuleiro[i][j] = 1;
            } else if (i == 6 && j >= 0 && j <= 4) {
                tabuleiro[i][j] = 1;
            }
        }
    }
    
    // Octaedro
    for (int i = 0; i < LINHAS_TABULEIRO; i++) {
        for (int j = 0; j < COLUNAS_TABULEIRO; j++) {
            if (i == 0 && j == 7) {
                tabuleiro[i][j] = 1;
            } else if (i == 1 && j >= 6 && j <= 8) {
                tabuleiro[i][j] = 1;
            } else if (i == 2 && j >= 5 && j <= 9) {
                tabuleiro[i][j] = 1;
            } else if (i == 3 && j >= 6 && j <= 8) {
                tabuleiro[i][j] = 1;
            } else if (i == 4 && j == 7) {
                tabuleiro[i][j] = 1;
            }
        }
    }

    // Exibindo letras para identificar colunas
    for (int c = 0; c <= COLUNAS_TABULEIRO; c++) {
        printf("%c ", letras_colunas[c]);
    } 
    
    printf("\n");

    // Exibindo números para identificar linhas
    for (int i = 0; i < LINHAS_TABULEIRO; i++) {
        printf("%d - ", i+1);

        // Exibindo tabuleiro na tela
        for (int j = 0; j < COLUNAS_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");

    }

    printf("-------------------------\n");

    return 0;
}
