#include <stdio.h>

int main() {
    int N, Y;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);
    printf("Digite um número inteiro Y: ");
    scanf("%d", &Y);

    printf("Múltiplos de %d inferiores a %d:\n", Y, N);

    for (int i = Y; i < N; i += Y) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}