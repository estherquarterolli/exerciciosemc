#include <stdio.h>

int main()
{
    int cod; 
    float quant, valorpg;

    // Solicita o código do item
    printf("Informe o código do item pedido: ");
    scanf("%d", &cod);
    
    // Solicita a quantidade
    printf("Quantos? ");
    scanf("%f", &quant);

    // Calcula o valor a ser pago baseado no código do item
    if (cod == 100)
    {
        valorpg = 3.50 * quant;
    }
    else if (cod == 101)
    {
        valorpg = 4.50 * quant;
    }
    else if (cod == 102)
    {
        valorpg = 5.20 * quant;
    }
    else if (cod == 103)
    {
        valorpg = 3.00 * quant;
    }
    else if (cod == 104)
    {
        valorpg = 4.00 * quant;
    }
    else
    {
        valorpg = 2.50 * quant;
    }
    
    // Exibe o valor a ser pago
    printf("O valor a ser pago é: %.2f\n", valorpg);

    return 0;
}
