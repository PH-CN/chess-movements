#include <stdio.h>

int t = 1, b = 1, r = 1, c = 1;;

void moverTorre(int casas) {
    if (casas > 0) {
        printf("A torre se moveu para a direita!\n");
        printf("Casa atual: %d\n", t);
        t++;
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("O  bispo se moveu para cima, direita!\n");
        printf("Casa atual: %d\n", b);
        b++;
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("A rainha se moveu para esquerda!\n");
        printf("Casa atual: %d\n", r);
        r++;
        moverRainha(casas - 1);
    }
}

int main() {
    // Movimentação da torre
    moverTorre(5);

    // Movimentação do bispo
    moverBispo(5);

    // Movimentação da rainha
    moverRainha(8);
    // Movimentação do cavalo
    for (int i = 0, j = 1; i < 3 && j < 4; i++, j++) {
        if (i == 2 && j == 3) {
            printf("O cavalo andou para a direita!\n");
            break;
        }
        printf("O cavalo andou para cima!\n");
    }
}
