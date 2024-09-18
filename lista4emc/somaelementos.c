#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1, j = 50; i <= 50 && j >= 1; i++, j--) {
        printf("%d, %d, ", i, j);
        soma += i + j;
    }

    printf("\nSoma dos elementos: %d\n", soma);
    return 0;
}
