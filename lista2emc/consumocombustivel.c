
int main()
{
    float km, kml, v; 
    float quantconsu, custototal; 


    printf("Quantos km serão percorridos? ");
    scanf("%f", &km);

 
    printf("Qual o número de km que o carro percorre por litro (km/L)? ");
    scanf("%f", &kml);

   
    printf("Qual o valor do combustível por litro? ");
    scanf("%f", &v);

  
    quantconsu = km / kml;
    custototal = quantconsu * v;

    printf("Quantidade de combustível necessária: %.2f litros\n", quantconsu);
    printf("Custo total da viagem: R$ %.2f\n", custototal);

    return 0;
}
