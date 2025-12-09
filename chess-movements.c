#include <stdio.h>

int main() {
    // Movimentação da torre
    int t = 1, b = 1, r = 1, c = 1;
    do {
        printf("A torre se moveu para a direita!\n");
        printf("Casa atual: %d\n", t);
        t++;
    } while (t <= 5);

    // Movimentação do bispo
    while (b <= 5) {
        printf("O bispo se moveu para cima, direita\n");
        printf("Casa atual %d\n", b);
        b++;
    }

    // Movimentação da rainha
    for (r; r <= 8; r++) {
        printf("A rainha se moveu para a esquerda\n");
        printf("Casa atual %d\n", r);
    }
    // Movimentação do cavalo
    while (c <= 1) {
        for (int i = 1; i <= 2; i++) {
            printf("O cavalo andou para baixo\n");
        }
        printf("O cavalo andou para a esquerda\n");
        c++;
    }
}
