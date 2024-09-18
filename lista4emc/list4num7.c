#include <stdio.h>

int main() {
    int X, gostou = 0, nao_gostou = 0;
    int gostou_fem = 0, gostou_masc = 0;
    char genero, resposta;

    printf("Digite o número de pessoas entrevistadas: ");
    scanf("%d", &X);

    for (int i = 0; i < X; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Gênero (M/F): ");
        scanf(" %c", &genero);
        printf("Resposta (G para gostou, N para não gostou): ");
        scanf(" %c", &resposta);

        if (resposta == 'G') {
            gostou++;
            if (genero == 'F') {
                gostou_fem++;
            } else if (genero == 'M') {
                gostou_masc++;
            }
        } else if (resposta == 'N') {
            nao_gostou++;
        }
    }

    printf("Número de pessoas que gostaram: %d\n", gostou);
    printf("Número de pessoas que não gostaram: %d\n", nao_gostou);

    if (gostou_fem > gostou_masc) {
        printf("Melhor aceitação no gênero feminino.\n");
    } else if (gostou_masc > gostou_fem) {
        printf("Melhor aceitação no gênero masculino.\n");
    } else {
        printf("Aceitação igual entre os gêneros.\n");
    }

    return 0;
}