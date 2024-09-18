#include <stdio.h>

int main() {
    int N;

    printf("Digite um número N (<= 18): ");
    scanf("%d", &N);

    if (N > 18) {
        printf("Erro: N deve ser menor ou igual a 18.\n");
        return 0;
    }

    printf("Números no intervalo de 1 a 99 cujos algarismos somam %d:\n", N);
    for (int i = 1; i <= 99; i++) {
        int dezena = i / 10;
        int unidade = i % 10;

        if (dezena + unidade == N) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}