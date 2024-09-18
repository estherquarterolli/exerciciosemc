#include <stdio.h>

int main() {
    float Q, R, total;
    int A;

    printf("Digite o valor do investimento (Q): ");
    scanf("%f", &Q);
    printf("Digite o rendimento fixo mensal (R em %%): ");
    scanf("%f", &R);
    printf("Digite o tempo de investimento em anos (A): ");
    scanf("%d", &A);

    R = R / 100.0; // converter para decimal
    total = Q;

    // Calcular o valor ao final de A anos
    for (int i = 0; i < A * 12; i++) {
        total += total * R;
    }

    printf("Valor total após %d anos: %.2f\n", A, total);
    return 0;
}