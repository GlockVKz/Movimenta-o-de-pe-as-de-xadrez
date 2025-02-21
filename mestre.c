#include <stdio.h>


void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}


void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}


void moverBispoLoop(int casas) {
    for (int i = 0; i < casas; i++) { 
        for (int j = 0; j < 1; j++) { 
            printf("Cima Direita\n");
        }
    }
}


void moverCavalo() {
    int movimentos[2][2] = {{1, 2}, {2, 1}}; 

    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < movimentos[i][1]; j++) {
            if (movimentos[i][0] == 1) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        }
        if (i == 0) continue;
        break; 
    }
}

int main() {
    
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo (Recursão):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoop(casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    moverCavalo();

    return 0;
}
