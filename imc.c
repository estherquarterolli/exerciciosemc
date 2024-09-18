float peso, altura, imc;

printf("Informe seu peso");
scanf("%f", &peso);

printf("Informe sua altura");
scanf("%f", &altura);

imc= peso / (altura * altura);

print("Seu IMC é: %.2f \n", imc);

if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } 
    else if (imc < 25) {
        printf("Classificação: Peso normal\n");
    } 
    else if (imc < 30) {
        printf("Classificação: Sobrepeso\n");
        } 
        else if (imc < 35) {
        printf("Classificação: obesidade 1\n");
        }
         else if (imc < 40) {
        printf("Classificação: obesidade 2\n");
    } 
        else {
        printf("Classificação: Obesidade 3\n");
    }

    return 0;
