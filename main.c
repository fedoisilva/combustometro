#include <stdio.h>

int main(){

    float valor_combustivel, distancia, combustivel_gasto, autonomia, custo_total;

    printf("DIGITE O VALOR DO LITRO DO COMBUSTÍVEL (R$): ");
    scanf("%f", &valor_combustivel);

    printf("DIGITE A DISTÂNCIA A SER PERCORRIDA (KM): ");
    scanf("%f", &distancia);

    printf("DIGITE A AUTONOMIA MÉDIA DO VEÍCULO (KM/L): ");
    scanf("%f", &autonomia);

    combustivel_gasto = distancia / autonomia;
    custo_total = combustivel_gasto * valor_combustivel;

    printf("\nSERÃO NECESSÁRIOS %.2f LITROS PARA REALIZAR O TRAJETO.\nO CUSTO TOTAL SERÁ DE R$%.2f.\n", combustivel_gasto, custo_total);

	return 0;
}
