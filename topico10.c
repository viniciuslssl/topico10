#include <stdio.h>

int main() {
    float custoFabrica, custoDistribuidor, custoImpostos, custoConsumidor;

    
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    custoDistribuidor = custoFabrica * 0.28;

   
    custoImpostos = custoFabrica * 0.45;

   
    custoConsumidor = custoFabrica + custoDistribuidor + custoImpostos;

    
    printf("O custo final ao consumidor é: %.2f\n", custoConsumidor);

    return 0;
}