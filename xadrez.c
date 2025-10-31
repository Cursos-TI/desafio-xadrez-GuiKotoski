#include <stdio.h>

// ================================
// Funções para movimentação das peças
// ================================

// Torre: função recursiva que simula movimento horizontal para a direita
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base: não há mais casas
    printf("Direita\n");     // Move uma casa para a direita
    moverTorre(casas - 1);   // Chamada recursiva para a próxima casa
}

// Rainha: função recursiva que simula movimento horizontal para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Esquerda\n");    // Move uma casa para a esquerda
    moverRainha(casas - 1);  // Chamada recursiva
}

// Bispo: função recursiva que simula movimento diagonal (cima e direita)
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return; // Caso base
    printf("Cima, Direita\n");                     // Move uma casa na diagonal
    moverBispo(vertical - 1, horizontal - 1);     // Recursão para a próxima casa
}

// ================================
// Movimento do Cavalo com loops complexos
// ================================
void moverCavalo(int movimentos) {
    int i, j;
    int casasMovidas = 0;

    // Loop externo controla os movimentos verticais
    for (i = 0; i < movimentos; i++) {
        // Loop interno controla o movimento horizontal em "L"
        for (j = 0; j < 1; j++) { // 1 casa para a direita
            if (casasMovidas >= movimentos) break; // Interrompe se já moveu o suficiente
            printf("Cima\n");   // Duas casas para cima
            printf("Cima\n");
            printf("Direita\n"); // Uma casa para direita
            casasMovidas++;
        }
    }
}

// ================================
// Bispo com loops aninhados
// ================================
void moverBispoLoopAninhado(int casasVerticais, int casasHorizontais) {
    printf("\nBispo com loops aninhados:\n");
    for (int v = 0; v < casasVerticais; v++) {        // Loop externo: vertical
        for (int h = 0; h < casasHorizontais; h++) {  // Loop interno: horizontal
            printf("Cima, Direita\n");
        }
    }
}

// ================================
// Função Principal
// ================================
int main() {
    // Definindo o número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    // ===============================================
    // Movimentos da Torre
    // ===============================================
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ===============================================
    // Movimentos do Bispo
    // ===============================================
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo);

    // ===============================================
    // Movimentos da Rainha
    // ===============================================
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ===============================================
    // Movimento do Cavalo com loops complexos
    // ===============================================
    printf("\nMovimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    // ===============================================
    // Bispo com loops aninhados
    // ===============================================
    moverBispoLoopAninhado(casasBispo, casasBispo);

    return 0;
}