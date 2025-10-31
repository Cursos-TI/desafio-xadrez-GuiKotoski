#include <stdio.h>

// ================================
// Funções das peças (recursivas)
// ================================

// Torre – movimento horizontal (Direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}


// Bispo – movimento diagonal (Cima e Direita)
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;
    printf("Diagonal Superior Direita\n");
    moverBispo(vertical - 1, horizontal - 1);
}

// Rainha – movimento total: horizontal, vertical e diagonal
void moverRainha(int casas) {
    if (casas <= 0) return;

    // Horizontal
    printf("Direita\n");
    // Vertical
    printf("Cima\n");
    // Diagonal
    printf("Diagonal Superior Direita\n");

    moverRainha(casas - 1);
}

// ================================
// Movimento do Cavalo com loops complexos
// ================================
void moverCavalo(int movimentos) {
    int i, j;
    int casasMovidas = 0;

    for (i = 0; i < movimentos; i++) {
        for (j = 0; j < 1; j++) {
            if (casasMovidas >= movimentos) break;
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            casasMovidas++;
        }
    }
}

// ================================
// Bispo com loops aninhados
// ================================
void moverBispoLoopAninhado(int casasVerticais, int casasHorizontais) {
    printf("\nBispo com loops aninhados:\n");
    for (int v = 0; v < casasVerticais; v++) {
        for (int h = 0; h < casasHorizontais; h++) {
            printf("Diagonal Superior Direita\n");
        }
    }
}

// ================================
// Função Principal
// ================================
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    moverBispoLoopAninhado(casasBispo, casasBispo);

    return 0;
}
