#include <stdio.h>

int main() {
    int planeta;
    int peso;
    float pesop;

    printf("Informe seu peso: ");
    scanf("%d", &peso); 

    printf("Escolha um número para saber seu peso no planeta:\n");
    printf("1 - Mercúrio\n");
    printf("2 - Vênus\n");
    printf("3 - Marte\n");
    printf("4 - Júpiter\n");
    printf("5 - Saturno\n");
    printf("6 - Urano\n");

    scanf("%d", &planeta);

    if (planeta == 1) {
        pesop = peso * 0.37;
    } else if (planeta == 2) {
        pesop = (peso/10) * 0.88;
    } else if (planeta == 3) {
        pesop = (peso/10) * 0.38;
    } else if (planeta == 4) {
        pesop = (peso/10) * 2.64;
    } else if (planeta == 5) {
        pesop = (peso/10) * 1.15;
    } else if (planeta == 6) {
        pesop = (peso/10) * 1.17;
    } else {
        printf("Número de planeta inválido.\n");
        return 1; // Retorna um código de erro
    }

    printf("Seu peso no planeta  é: %.2f\n ", pesop);
   

    return 0;
}
