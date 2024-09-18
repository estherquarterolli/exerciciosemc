#include <stdio.h>

int main()
{
    int i;
    float a, b, c;
    

    printf("Informe um número inteiro (i): ");
    scanf("%d", &i);
    
    printf("Informe o valor de a: ");
    scanf("%f", &a);
    
    printf("Informe o valor de b: ");
    scanf("%f", &b);
    
    printf("Informe o valor de c: ");
    scanf("%f", &c);
    
    // Exibindo os valores em ordem crescente
    printf("1. Ordem crescente:\n");
    if (a <= b && a <= c)
    {
        if (b <= c)
            printf("%.2f, %.2f, %.2f\n", a, b, c);
        else
            printf("%.2f, %.2f, %.2f\n", a, c, b);
    }
    else if (b <= a && b <= c)
    {
        if (a <= c)
            printf("%.2f, %.2f, %.2f\n", b, a, c);
        else
            printf("%.2f, %.2f, %.2f\n", b, c, a);
    }
    else
    {
        if (a <= b)
            printf("%.2f, %.2f, %.2f\n", c, a, b);
        else
            printf("%.2f, %.2f, %.2f\n", c, b, a);
    }
    
    // Exibindo os valores em ordem decrescente
    printf("2. Ordem decrescente:\n");
    if (a >= b && a >= c)
    {
        if (b >= c)
            printf("%.2f, %.2f, %.2f\n", a, b, c);
        else
            printf("%.2f, %.2f, %.2f\n", a, c, b);
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
            printf("%.2f, %.2f, %.2f\n", b, a, c);
        else
            printf("%.2f, %.2f, %.2f\n", b, c, a);
    }
    else
    {
        if (a >= b)
            printf("%.2f, %.2f, %.2f\n", c, a, b);
        else
            printf("%.2f, %.2f, %.2f\n", c, b, a);
    }
    
    // Exibindo o maior valor no meio
    printf("3. Maior valor no meio:\n");
    if ((a >= b && a <= c) || (a <= b && a >= c))
    {
        if (b >= c)
            printf("%.2f, %.2f, %.2f\n", c, a, b);
        else
            printf("%.2f, %.2f, %.2f\n", b, a, c);
    }
    else if ((b >= a && b <= c) || (b <= a && b >= c))
    {
        if (a >= c)
            printf("%.2f, %.2f, %.2f\n", c, b, a);
        else
            printf("%.2f, %.2f, %.2f\n", a, b, c);
    }
    else
    {
        if (a >= b)
            printf("%.2f, %.2f, %.2f\n", b, c, a);
        else
            printf("%.2f, %.2f, %.2f\n", c, a, b);
    }

    return 0;
}
