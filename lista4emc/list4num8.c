#include <stdio.h>

int main() {
    int matricula, idade, tempo_trabalho, total_feminino = 0, total_menos_21 = 0, mais_novo, mais_antigo;
    float salario, soma_salario_homens = 0;
    int total_homens = 0, matricula_antigo, matricula_novo;
    char genero;

    for (int i = 0; i < 250; i++) {
        printf("Funcionário %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &matricula);
        printf("Gênero (M/F): ");
        scanf(" %c", &genero);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Salário: ");
        scanf("%f", &salario);
        printf("Tempo de trabalho (em anos): ");
        scanf("%d", &tempo_trabalho);

        if (idade < 21) {
            total_menos_21++;
        }
        if (genero == 'F') {
            total_feminino++;
        } else if (genero == 'M') {
            total_homens++;
            soma_salario_homens += salario;
        }

        // Checar funcionário mais antigo e mais novo
        if (i == 0 || tempo_trabalho > mais_antigo) {
            mais_antigo = tempo_trabalho;
            matricula_antigo = matricula;
        }
        if (i == 0 || tempo_trabalho < mais_novo) {
            mais_novo = tempo_trabalho;
            matricula_novo = matricula;
        }
    }

    printf("Funcionários que ingressaram com menos de 21 anos: %d\n", total_menos_21);
    printf("Quantidade de funcionárias do gênero feminino: %d\n", total_feminino);
    if (total_homens > 0) {
        printf("Média salarial dos homens: %.2f\n", soma_salario_homens / total_homens);
    } else {
        printf("Nenhum homem foi cadastrado.\n");
    }
    printf("Matrícula do funcionário mais antigo: %d\n", matricula_antigo);
    printf("Matrícula do funcionário mais novo: %d\n", matricula_novo);

    return 0;
}