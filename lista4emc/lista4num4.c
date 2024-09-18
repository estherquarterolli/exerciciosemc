#include <stdio.h>

int main() {
    float numero, soma_positivos = 0;
    int negativos = 0, positivos = 0;

    for (int i = 0; i < 300; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numero);

        if (numero < 0) {
            negativos++;
        } else if (numero > 0) {
            positivos++;
            soma_positivos += numero;
        }
    }

    printf("Quantidade de números negativos: %d\n", negativos);
    if (positivos > 0) {
        printf("Média dos valores positivos: %.2f\n", soma_positivos / positivos);
    } else {
        printf("Nenhum número positivo foi digitado.\n");
    }

    return 0;
}