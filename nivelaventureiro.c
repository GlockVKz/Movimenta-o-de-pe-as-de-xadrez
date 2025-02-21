#include <stdio.h>

int main() {
    
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int casasCavaloBaixo = 2;
    const int casasCavaloEsquerda = 1;

    int i, j;

    printf("Movimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");

    for (i = 0; i < casasCavaloBaixo; i++) {
        printf("Baixo\n");
    }

    j = 0;
    while (j < casasCavaloEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
