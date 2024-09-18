int main()
{
    // Valor original, 10%, parcelamento em 5, parcelamento com juros
   float vo, dp, p5, p1020;
    printf("Informe o valor do produto");
    scanf("%f", &vo);

        dp=  vo - (0.1 * vo);
        p5= vo/5;
        p1020 = 1.20 * vo;

    printf("Valor do produto com 10%% de desconto: %.2f\n", dp);
    printf("Valor em 5x sem juros: %.2f\n", p5);
    printf("Valor do produto com 20%% de acréscimo: %.2f\n", p1020);

    return 0;
}
