#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Criando constantes para representar linhas, colunas e o tamanho maximo dos navios (3 casas)
#define LINHAS_TABULEIRO 10
#define COLUNAS_TABULEIRO 10
#define TAM_MAX_NAVIO 3

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Declarando Matriz e Vetor (Tabuleiro e Coluna)
    int tabuleiro[LINHAS_TABULEIRO][COLUNAS_TABULEIRO];
    char letras_colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    // Número que representamos os navios
    int representar_navios = 3;

    // Possiveis posições dos navios
    int pos_vertical, pos_horizontal, pos_diagonal;

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
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

    // Navio Horizontal
    for (pos_horizontal = 1; pos_horizontal < 4; pos_horizontal++) {
        tabuleiro[4][pos_horizontal] = representar_navios;
    }

    // Navio Vertical
    for (pos_vertical = 4; pos_vertical < 7; pos_vertical++) {
        tabuleiro[pos_vertical][8] = representar_navios;
    }

    for (pos_diagonal = 0; pos_diagonal < 3; pos_diagonal++){
        tabuleiro[pos_diagonal][pos_diagonal] = representar_navios;
    }

    for (pos_diagonal = 1; pos_diagonal < 4; pos_diagonal++) {
        tabuleiro[pos_diagonal][9-pos_diagonal] = representar_navios;
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
