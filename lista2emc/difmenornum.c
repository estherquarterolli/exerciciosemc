#include <stdio.h>

int main()
{
    int n1, n2, m1=0, m2=0, subTotal;
    printf("Informe o primeiro valor dentro do intervalo de 1 e 999:");
    scanf("%d", &n1);
    
    printf("Informe o segundo valor dentro do intervalo de 1 e 999");
    scanf("%d", &n2);

    if ((n1 < 1 || n1 > 999) || (n2 < 1 || n2 > 999)){
        printf("Um dos números informados está fora do intervalo permitido ");
          return 1; //  PRECISA PRA SAIR DO PROGAMAAAA
    }

     if (n1 / 100 > (n1 % 100) / 10 && n1 / 100 > n1 % 10) {
         m1 = n1 / 100; } 
         
         else if ((n1 % 100) / 10 > n1 % 10) {
        m1 = (n1 % 100) / 10;
     } else {
        m1 = n1 % 10;
}

 if (n2 / 100 > (n2 % 100) / 10 && n2 / 100 > n2 % 10) { //testa se a centena é maior...
         m2 = n2 / 100;
     } else if ((n2 % 100) / 10 > n2 % 10) { //testa se a dezena é maior...
        m2 = (n2 % 100) / 10;
     } else {
        m2 = n2 % 10; //testa se a unidade é maior...
}
if (m1> m2){
    subTotal = m1 - m2;
}
else{
   subTotal = m2 - m1;
}

printf("A subtração de %d e %d é: %d", m1, m2, subTotal);

return 0;
}